#pragma once
#define _S System::String^
#define _I int
#define _B bool
/*
 *  мер, ю бнр б щрнл тюике реае декюрэ мевецн! :)
 *  бяе мсфмше мюярпнийх б тюике SETTINGS.h
 */
public ref struct Server
{
public:
	System::String 
		^Name,
		^UpdURL,
		^FolderName,
		^NewsURL,
		^SiteURL,
		^ServerIP,
		^SecretKey;
	int ServerPort;
	Server(_S _Name,_S _UpdURL, _S _FolderName, _S _NewsURL, _S _SiteURL, _S _ServerIP, _S _SecretKey, _I _ServerPort)
	{
		Name=_Name;
		UpdURL=_UpdURL;
		FolderName=_FolderName;
		NewsURL=_NewsURL;
		SiteURL=_SiteURL;
		ServerIP=_ServerIP;
		SecretKey=_SecretKey;
		ServerPort=_ServerPort;
	}
};
public ref struct SETTINGS{
public:
	System::String 
		^vLauncherName, 
		^UpdURL,
		^MainFileName,
		^FolderName,
		^NewsURL,
		^SiteURL,
		^ServerIP,
		^Version,
		^SecretKey;

	int ServerPort;
	bool BrowserNav,BrowserScr;
	bool 
		EnablevLauncherGameGuard,
		EnableMultiServerSupport;
	int ServerCount;
	array<Server^>^ Servers;
	SETTINGS();
	void LoadSettingsFromServer(int ServerID)
	{
		UpdURL=Servers[ServerID]->UpdURL;
		FolderName=Servers[ServerID]->FolderName;
		NewsURL=Servers[ServerID]->NewsURL;
		SiteURL=Servers[ServerID]->SiteURL;
		ServerIP=Servers[ServerID]->ServerIP;
		SecretKey=Servers[ServerID]->SecretKey;
		ServerPort=Servers[ServerID]->ServerPort;
	}
};
public ref struct UserSettings
{
public:

	int 
		FullClient,
		Memory,
		ServerID;
	bool
		AutoLogin,
		AlwaysPlayOffline,
		RememberPass;
	System::String
		^Login,
		^Password;
	UserSettings()
	{
		ServerID=0;
		FullClient=1;
		AlwaysPlayOffline=false;
		RememberPass=true;
		Login="";
		Password="";
		Memory=1024;
		AutoLogin=false;
	}
};
public ref class SettingsSaver
{
public:
	UserSettings ^US;
	_S SettingsFileName;
	SettingsSaver(_S _SettingsFileName)
	{
		SettingsFileName=_SettingsFileName;
		try{
		US=gcnew UserSettings;
		System::Xml::Serialization::XmlSerializer ^X=gcnew System::Xml::Serialization::XmlSerializer(US->GetType());
		System::IO::StreamReader ^FS=gcnew System::IO::StreamReader(SettingsFileName);
		US=(UserSettings ^) X->Deserialize(FS);
		FS->Close();
		}
		catch (System::IO::FileNotFoundException^ FE)
		{
			US=gcnew UserSettings();
		}
	}
	~SettingsSaver()
	{
		Save();
	}
	void Save()
	{
		if (!US->RememberPass)
		{US->Password=""; US->AutoLogin=false;}
		System::Xml::Serialization::XmlSerializer ^X=gcnew System::Xml::Serialization::XmlSerializer(US->GetType());
		System::IO::StreamWriter ^SW=gcnew System::IO::StreamWriter(SettingsFileName);
		X->Serialize(SW,US);
		SW->Close();
	}
/*
void Set(_I mem, _I ful, _B offline,_B rempass, _S login, _S password)
	{
		mem=US->Memory;
		ful=US->FullClient;
		offline=US->AlwaysPlayOffline;
		rempass=US->RememberPass;
		login=US->Login;
		password=US->Password;
	}*/
void Read(_I mem, _I ful, _B offline,_B rempass, _S login, _S password)
{
	US->Memory=mem;
	US->FullClient=ful;
	US->AlwaysPlayOffline=offline;
	US->RememberPass=rempass;
	US->Login=login;
	US->Password=password;
}
};