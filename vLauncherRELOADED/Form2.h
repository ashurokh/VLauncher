#pragma once

#pragma region Windows Form Designer generated code
namespace vLauncherRELOADED {

	using namespace System;
	using namespace System::Net;
	using namespace System::Net::NetworkInformation;
	using namespace System::Text;
	using namespace System::Net::Sockets;
	using namespace System::Threading;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	protected: 

	protected: 

	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;


		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 77);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(380, 23);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Marquee;
			this->progressBar1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Инициализация...";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Текущая версия:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Доступная версия:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(122, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"N/A";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(122, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"N/A";
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(404, 112);
			this->ControlBox = false;
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->progressBar1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(420, 150);
			this->MinimumSize = System::Drawing::Size(420, 150);
			this->Name = L"Form2";
			this->Opacity = 0.9;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"vLauncher Updater";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:
		String ^CurrentVer, ^AvailableVer, ^UpdateUrl, ^FileName;
		Thread^ UpdaterThread;
		bool UpdateSuccess;
		void Update()
		{
			WebClient ^W=gcnew WebClient;
			try{
			label1->Text="Получение версии лаунчера...";
			AvailableVer=W->DownloadString(UpdateUrl+FileName+"?action=getversion");
			}catch(Exception ^E){
				label1->Text="Ошибка соединения, попробуйте позже!";
				return;}
			label5->Text=AvailableVer;
			if (AvailableVer==CurrentVer)
			{label1->Text="Версии эквивалентны, обновление не требуется";UpdateSuccess=true; return;}
			else
			{
				label1->Text="Загрузка обновления...";
				try{
				W->DownloadFile(UpdateUrl+"vLauncher.exe","TMPvL.EXE");
				}catch(NullReferenceException ^E){
					label1->Text="Ошибка загрузки, попробуйте позже!";
					return;
				}
				label1->Text="Перезапуск и обновление...";
				String ^Bat="@echo off\ncls\ntaskkill /F /T /PID %1\ndel /Q /F %1\nrename %2 %1\nstart %1\ndel /Q /F %0\n";
				IO::File::WriteAllText("TMPvL.BAT",Bat);
				Thread::Sleep(500);
				Diagnostics::Process::Start("TMPvL.BAT",Diagnostics::Process::GetCurrentProcess()->ProcessName+".exe TMPvL.EXE");
				Diagnostics::Process::GetCurrentProcess()->Kill();
			}
		}
		void UpdThread()
		{
			Update();
			Thread::Sleep(1500);
			this->Close();
		}
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
				 label4->Text=CurrentVer;
				 UpdateSuccess=false;
				 System::Windows::Forms::Control::CheckForIllegalCrossThreadCalls = false;
				 UpdaterThread = gcnew Thread(gcnew ThreadStart(this,&Form2::UpdThread));
				 UpdaterThread->Start();
			 }
	};
}
