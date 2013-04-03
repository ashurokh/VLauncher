#pragma once
#ifndef ___Sh
#include "SETTINGS.h"
#define ___Sh
#endif
#include "Form2.h"
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
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			
			USER_SETTINGS->Save();
			try{
			UpdaterThread->Abort();
			StatusThread->Abort();
			}catch(Exception^E){}
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 




	private: System::Drawing::Image ^progress_image;
	private: System::Drawing::Text::PrivateFontCollection ^pfc;
	private: System::Drawing::FontFamily ^MC_Font;

	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::Button^  button3;


	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;


	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  FocusKeeper;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  registerpanel;
	private: System::Windows::Forms::Panel^  changepasspanel;
	private: System::Windows::Forms::Panel^  restorepasspanel;
	private: System::Windows::Forms::CheckBox^  checkBox1_save_pass;
	private: System::Windows::Forms::TextBox^  textBox2_pass;
	private: System::Windows::Forms::TextBox^  registertextBox2_pass;
	private: System::Windows::Forms::TextBox^  registertextBox2_pass2;
	private: System::Windows::Forms::TextBox^  changepasstextBox2_oldpass;
	private: System::Windows::Forms::TextBox^  changepasstextBox2_newpass;
	private: System::Windows::Forms::TextBox^  changepasstextBox2_newpass2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  registerlabel1;
	private: System::Windows::Forms::Label^  registerlabel2;
	private: System::Windows::Forms::Label^  registerlabel3;
	private: System::Windows::Forms::Label^  registerlabel4;
	private: System::Windows::Forms::Label^  changepasslabel1;
	private: System::Windows::Forms::Label^  changepasslabel2;
	private: System::Windows::Forms::Label^  changepasslabel3;
	private: System::Windows::Forms::Label^  changepasslabel4;
	private: System::Windows::Forms::Label^  restorepasslabel1;
	private: System::Windows::Forms::Label^  restorepasslabel2;
	private: System::Windows::Forms::TextBox^  textBox1_login;
	private: System::Windows::Forms::TextBox^  registertextBox1_login;
	private: System::Windows::Forms::TextBox^  restorepasstextBox1_login;
	private: System::Windows::Forms::TextBox^  changepasstextBox1_login;
	private: System::Windows::Forms::TextBox^  registertextBox3_email;
	private: System::Windows::Forms::TextBox^  restorepasstextBox2_email;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::CheckBox^  checkBox1;


	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Button^  button9;
    private: System::Windows::Forms::Button^  registerbutton;
	private: System::Windows::Forms::Button^  backbutton1;
	private: System::Windows::Forms::Button^  backbutton2;
	private: System::Windows::Forms::Button^  backbutton3;
	private: System::Windows::Forms::Button^  regbutton;
	private: System::Windows::Forms::Button^  rpbutton;
	private: System::Windows::Forms::Button^  restorepassbutton;
	private: System::Windows::Forms::Button^  cpbutton;
	private: System::Windows::Forms::Button^  changepassbutton;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  registerpictureBox1;
	private: System::Windows::Forms::PictureBox^  registerpictureBox2;
	private: System::Windows::Forms::PictureBox^  registerpictureBox3;
	private: System::Windows::Forms::PictureBox^  registerpictureBox4;
	private: System::Windows::Forms::PictureBox^  changepasspictureBox1;
	private: System::Windows::Forms::PictureBox^  changepasspictureBox2;
	private: System::Windows::Forms::PictureBox^  changepasspictureBox3;
	private: System::Windows::Forms::PictureBox^  changepasspictureBox4;
	private: System::Windows::Forms::PictureBox^  restorepasspictureBox1;
	private: System::Windows::Forms::PictureBox^  restorepasspictureBox2;
	private: System::Windows::Forms::NotifyIcon^  notifyIcon1;
	private: System::ComponentModel::IContainer^  components;





			 /// <summary>
		/// Требуется переменная конструктора.
		/// </summary>



		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->FocusKeeper = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2_pass = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_login = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->checkBox1_save_pass = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->registerbutton = (gcnew System::Windows::Forms::Button());
			this->changepassbutton = (gcnew System::Windows::Forms::Button());
			this->restorepassbutton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->backbutton1 = (gcnew System::Windows::Forms::Button());
			this->backbutton2 = (gcnew System::Windows::Forms::Button());
			this->backbutton3 = (gcnew System::Windows::Forms::Button());
			this->registerlabel1 = (gcnew System::Windows::Forms::Label());
			this->registerlabel2 = (gcnew System::Windows::Forms::Label());
			this->registerlabel3 = (gcnew System::Windows::Forms::Label());
			this->registerlabel4 = (gcnew System::Windows::Forms::Label());
			this->changepasslabel1 = (gcnew System::Windows::Forms::Label());
			this->changepasslabel2 = (gcnew System::Windows::Forms::Label());
			this->changepasslabel3 = (gcnew System::Windows::Forms::Label());
			this->changepasslabel4 = (gcnew System::Windows::Forms::Label());
			this->restorepasslabel1 = (gcnew System::Windows::Forms::Label());
			this->restorepasslabel2 = (gcnew System::Windows::Forms::Label());
			this->registerpictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->registerpictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->registerpictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->registerpictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->changepasspictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->changepasspictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->changepasspictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->changepasspictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->restorepasspictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->restorepasspictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->registerpanel = (gcnew System::Windows::Forms::Panel());
			this->registertextBox1_login = (gcnew System::Windows::Forms::TextBox());
			this->registertextBox2_pass = (gcnew System::Windows::Forms::TextBox());
			this->registertextBox2_pass2 = (gcnew System::Windows::Forms::TextBox());
			this->registertextBox3_email = (gcnew System::Windows::Forms::TextBox());
			this->regbutton = (gcnew System::Windows::Forms::Button());
			this->changepasspanel = (gcnew System::Windows::Forms::Panel());
			this->changepasstextBox1_login = (gcnew System::Windows::Forms::TextBox());
			this->changepasstextBox2_oldpass = (gcnew System::Windows::Forms::TextBox());
			this->changepasstextBox2_newpass = (gcnew System::Windows::Forms::TextBox());
			this->changepasstextBox2_newpass2 = (gcnew System::Windows::Forms::TextBox());
			this->cpbutton = (gcnew System::Windows::Forms::Button());
			this->restorepasspanel = (gcnew System::Windows::Forms::Panel());
			this->restorepasstextBox1_login = (gcnew System::Windows::Forms::TextBox());
			this->restorepasstextBox2_email = (gcnew System::Windows::Forms::TextBox());
			this->rpbutton = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->registerpictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->registerpictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->registerpictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->registerpictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->changepasspictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->changepasspictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->changepasspictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->changepasspictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->restorepasspictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->restorepasspictureBox2))->BeginInit();
			this->registerpanel->SuspendLayout();
			this->changepasspanel->SuspendLayout();
			this->restorepasspanel->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
			this->panel4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button1->ForeColor = System::Drawing::Color::Cornsilk;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 67);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Новости";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::vButtonMouseClick);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &Form1::vButtonMouseEnter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &Form1::vButtonMouseLeave);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->webBrowser1);
			this->panel1->Location = System::Drawing::Point(146, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(476, 359);
			this->panel1->TabIndex = 6;
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(373, 340);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(100, 13);
			this->label10->TabIndex = 3;
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(90, 340);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 13);
			this->label9->TabIndex = 2;
			this->label9->Text = L"OFFLINE";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 340);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(89, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Статус сервера:";
			// 
			// webBrowser1
			// 
			this->webBrowser1->AllowWebBrowserDrop = false;
			this->webBrowser1->IsWebBrowserContextMenuEnabled = false;
			this->webBrowser1->Location = System::Drawing::Point(3, 6);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->ScriptErrorsSuppressed = true;
			this->webBrowser1->Size = System::Drawing::Size(470, 324);
			this->webBrowser1->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Cornsilk;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->Location = System::Drawing::Point(12, 158);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 67);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Аккаунт";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			this->button3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::vButtonMouseClick);
			this->button3->MouseEnter += gcnew System::EventHandler(this, &Form1::vButtonMouseEnter);
			this->button3->MouseLeave += gcnew System::EventHandler(this, &Form1::vButtonMouseLeave);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button5->ForeColor = System::Drawing::Color::Cornsilk;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->Location = System::Drawing::Point(12, 304);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(128, 67);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Опции";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			this->button5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::vButtonMouseClick);
			this->button5->MouseEnter += gcnew System::EventHandler(this, &Form1::vButtonMouseEnter);
			this->button5->MouseLeave += gcnew System::EventHandler(this, &Form1::vButtonMouseLeave);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button4->ForeColor = System::Drawing::Color::Cornsilk;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->Location = System::Drawing::Point(12, 231);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(128, 67);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Скины";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			this->button4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::vButtonMouseClick);
			this->button4->MouseEnter += gcnew System::EventHandler(this, &Form1::vButtonMouseEnter);
			this->button4->MouseLeave += gcnew System::EventHandler(this, &Form1::vButtonMouseLeave);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Location = System::Drawing::Point(146, 392);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(17, 60);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->Location = System::Drawing::Point(564, 392);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(57, 60);
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(169, 428);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(389, 24);
			this->pictureBox3->TabIndex = 13;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(487, 408);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 17);
			this->label1->TabIndex = 15;
			this->label1->Text = L"0.00%";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// FocusKeeper
			// 
			this->FocusKeeper->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"FocusKeeper.Image")));
			this->FocusKeeper->Location = System::Drawing::Point(377, 12);
			this->FocusKeeper->Name = L"FocusKeeper";
			this->FocusKeeper->Size = System::Drawing::Size(0, 0);
			this->FocusKeeper->TabIndex = 0;
			this->FocusKeeper->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::Cornsilk;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->Location = System::Drawing::Point(12, 377);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(128, 75);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Играть";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			this->button6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::vButtonMouseClick);
			this->button6->MouseEnter += gcnew System::EventHandler(this, &Form1::vButtonMouseEnter);
			this->button6->MouseLeave += gcnew System::EventHandler(this, &Form1::vButtonMouseLeave);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->textBox2_pass);
			this->panel2->Controls->Add(this->textBox1_login);
			this->panel2->Controls->Add(this->pictureBox7);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->checkBox1_save_pass);
			this->panel2->Controls->Add(this->pictureBox6);
			this->panel2->Controls->Add(this->registerbutton);
			this->panel2->Controls->Add(this->changepassbutton);
			this->panel2->Controls->Add(this->restorepassbutton);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(146, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(476, 359);
			this->panel2->TabIndex = 17;
			this->panel2->Visible = false;
			// 
			// textBox2_pass
			// 
			this->textBox2_pass->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->textBox2_pass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2_pass->Location = System::Drawing::Point(199, 130);
			this->textBox2_pass->Name = L"textBox2_pass";
			this->textBox2_pass->PasswordChar = '*';
			this->textBox2_pass->Size = System::Drawing::Size(158, 17);
			this->textBox2_pass->TabIndex = 3;
			this->textBox2_pass->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_pass_TextChanged_1);
			// 
			// textBox1_login
			// 
			this->textBox1_login->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->textBox1_login->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1_login->Location = System::Drawing::Point(199, 95);
			this->textBox1_login->Name = L"textBox1_login";
			this->textBox1_login->Size = System::Drawing::Size(158, 17);
			this->textBox1_login->TabIndex = 1;
			this->textBox1_login->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_login_TextChanged);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Location = System::Drawing::Point(193, 124);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(170, 29);
			this->pictureBox7->TabIndex = 7;
			this->pictureBox7->TabStop = false;
			// 
			// button9
			// 
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::Color::Cornsilk;
			this->button9->Location = System::Drawing::Point(296, 158);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(67, 23);
			this->button9->TabIndex = 5;
			this->button9->Text = L"Войти";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			this->button9->MouseEnter += gcnew System::EventHandler(this, &Form1::vButtonMouseEnter);
			this->button9->MouseLeave += gcnew System::EventHandler(this, &Form1::vButtonMouseLeave);
			// 
			// checkBox1_save_pass
			// 
			this->checkBox1_save_pass->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox1_save_pass->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox1_save_pass->Checked = true;
			this->checkBox1_save_pass->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1_save_pass->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->checkBox1_save_pass->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->checkBox1_save_pass->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->checkBox1_save_pass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox1_save_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->checkBox1_save_pass->Location = System::Drawing::Point(145, 158);
			this->checkBox1_save_pass->Name = L"checkBox1_save_pass";
			this->checkBox1_save_pass->Size = System::Drawing::Size(145, 23);
			this->checkBox1_save_pass->TabIndex = 4;
			this->checkBox1_save_pass->Text = L"Запомнить пароль";
			this->checkBox1_save_pass->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox1_save_pass->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->checkBox1_save_pass->UseVisualStyleBackColor = true;
			this->checkBox1_save_pass->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_save_pass_CheckedChanged);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Location = System::Drawing::Point(193, 89);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(170, 29);
			this->pictureBox6->TabIndex = 6;
			this->pictureBox6->TabStop = false;
			// 
			// registerbutton
			// 
			this->registerbutton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->registerbutton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->registerbutton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->registerbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->registerbutton->ForeColor = System::Drawing::Color::Cornsilk;
			this->registerbutton->Location = System::Drawing::Point(145, 187);
			this->registerbutton->Name = L"registerbutton";
			this->registerbutton->Size = System::Drawing::Size(218, 23);
			this->registerbutton->TabIndex = 5;
			this->registerbutton->Text = L"Регистрация";
			this->registerbutton->UseVisualStyleBackColor = true;
			this->registerbutton->Click += gcnew System::EventHandler(this, &Form1::registerbutton_Click);
			this->registerbutton->MouseEnter += gcnew System::EventHandler(this, &Form1::vButtonMouseEnter);
			this->registerbutton->MouseLeave += gcnew System::EventHandler(this, &Form1::vButtonMouseLeave);
			// 
			// changepassbutton
			// 
			this->changepassbutton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->changepassbutton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->changepassbutton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->changepassbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->changepassbutton->ForeColor = System::Drawing::Color::Cornsilk;
			this->changepassbutton->Location = System::Drawing::Point(145, 216);
			this->changepassbutton->Name = L"changepassbutton";
			this->changepassbutton->Size = System::Drawing::Size(218, 23);
			this->changepassbutton->TabIndex = 5;
			this->changepassbutton->Text = L"Изменение пароля";
			this->changepassbutton->UseVisualStyleBackColor = true;
			this->changepassbutton->Click += gcnew System::EventHandler(this, &Form1::changepassbutton_Click);
			this->changepassbutton->MouseEnter += gcnew System::EventHandler(this, &Form1::vButtonMouseEnter);
			this->changepassbutton->MouseLeave += gcnew System::EventHandler(this, &Form1::vButtonMouseLeave);
			// 
			// restorepassbutton
			// 
			this->restorepassbutton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->restorepassbutton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->restorepassbutton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->restorepassbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->restorepassbutton->ForeColor = System::Drawing::Color::Cornsilk;
			this->restorepassbutton->Location = System::Drawing::Point(145, 245);
			this->restorepassbutton->Name = L"restorepassbutton";
			this->restorepassbutton->Size = System::Drawing::Size(218, 23);
			this->restorepassbutton->TabIndex = 5;
			this->restorepassbutton->Text = L"Восстановление пароля";
			this->restorepassbutton->UseVisualStyleBackColor = true;
			this->restorepassbutton->Click += gcnew System::EventHandler(this, &Form1::restorepassbutton_Click);
			this->restorepassbutton->MouseEnter += gcnew System::EventHandler(this, &Form1::vButtonMouseEnter);
			this->restorepassbutton->MouseLeave += gcnew System::EventHandler(this, &Form1::vButtonMouseLeave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(116, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Пароль:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(126, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Логин:";
			// 
			// backbutton1
			// 
			this->backbutton1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->backbutton1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->backbutton1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->backbutton1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backbutton1->ForeColor = System::Drawing::Color::Cornsilk;
			this->backbutton1->Location = System::Drawing::Point(145, 263);
			this->backbutton1->Name = L"backbutton1";
			this->backbutton1->Size = System::Drawing::Size(218, 23);
			this->backbutton1->TabIndex = 5;
			this->backbutton1->Text = L"Назад";
			this->backbutton1->UseVisualStyleBackColor = true;
			this->backbutton1->Click += gcnew System::EventHandler(this, &Form1::backbutton_Click);
			this->backbutton1->MouseEnter += gcnew System::EventHandler(this, &Form1::vButtonMouseEnter);
			this->backbutton1->MouseLeave += gcnew System::EventHandler(this, &Form1::vButtonMouseLeave);
			// 
			// backbutton2
			// 
			this->backbutton2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->backbutton2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->backbutton2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->backbutton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backbutton2->ForeColor = System::Drawing::Color::Cornsilk;
			this->backbutton2->Location = System::Drawing::Point(130, 263);
			this->backbutton2->Name = L"backbutton2";
			this->backbutton2->Size = System::Drawing::Size(218, 23);
			this->backbutton2->TabIndex = 5;
			this->backbutton2->Text = L"Назад";
			this->backbutton2->UseVisualStyleBackColor = true;
			this->backbutton2->Click += gcnew System::EventHandler(this, &Form1::backbutton_Click);
			this->backbutton2->MouseEnter += gcnew System::EventHandler(this, &Form1::vButtonMouseEnter);
			this->backbutton2->MouseLeave += gcnew System::EventHandler(this, &Form1::vButtonMouseLeave);
			// 
			// backbutton3
			// 
			this->backbutton3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->backbutton3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->backbutton3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->backbutton3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backbutton3->ForeColor = System::Drawing::Color::Cornsilk;
			this->backbutton3->Location = System::Drawing::Point(131, 211);
			this->backbutton3->Name = L"backbutton3";
			this->backbutton3->Size = System::Drawing::Size(218, 23);
			this->backbutton3->TabIndex = 5;
			this->backbutton3->Text = L"Назад";
			this->backbutton3->UseVisualStyleBackColor = true;
			this->backbutton3->Click += gcnew System::EventHandler(this, &Form1::backbutton_Click);
			this->backbutton3->MouseEnter += gcnew System::EventHandler(this, &Form1::vButtonMouseEnter);
			this->backbutton3->MouseLeave += gcnew System::EventHandler(this, &Form1::vButtonMouseLeave);
			// 
			// registerlabel1
			// 
			this->registerlabel1->AutoSize = true;
			this->registerlabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->registerlabel1->Location = System::Drawing::Point(150, 95);
			this->registerlabel1->Name = L"registerlabel1";
			this->registerlabel1->Size = System::Drawing::Size(59, 20);
			this->registerlabel1->TabIndex = 1;
			this->registerlabel1->Text = L"Логин:";
			// 
			// registerlabel2
			// 
			this->registerlabel2->AutoSize = true;
			this->registerlabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->registerlabel2->Location = System::Drawing::Point(138, 130);
			this->registerlabel2->Name = L"registerlabel2";
			this->registerlabel2->Size = System::Drawing::Size(71, 20);
			this->registerlabel2->TabIndex = 2;
			this->registerlabel2->Text = L"Пароль:";
			// 
			// registerlabel3
			// 
			this->registerlabel3->AutoSize = true;
			this->registerlabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->registerlabel3->Location = System::Drawing::Point(80, 165);
			this->registerlabel3->Name = L"registerlabel3";
			this->registerlabel3->Size = System::Drawing::Size(129, 20);
			this->registerlabel3->TabIndex = 3;
			this->registerlabel3->Text = L"Повтор пароля:";
			// 
			// registerlabel4
			// 
			this->registerlabel4->AutoSize = true;
			this->registerlabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->registerlabel4->Location = System::Drawing::Point(157, 200);
			this->registerlabel4->Name = L"registerlabel4";
			this->registerlabel4->Size = System::Drawing::Size(52, 20);
			this->registerlabel4->TabIndex = 4;
			this->registerlabel4->Text = L"Email:";
			// 
			// changepasslabel1
			// 
			this->changepasslabel1->AutoSize = true;
			this->changepasslabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->changepasslabel1->Location = System::Drawing::Point(152, 95);
			this->changepasslabel1->Name = L"changepasslabel1";
			this->changepasslabel1->Size = System::Drawing::Size(59, 20);
			this->changepasslabel1->TabIndex = 1;
			this->changepasslabel1->Text = L"Логин:";
			// 
			// changepasslabel2
			// 
			this->changepasslabel2->AutoSize = true;
			this->changepasslabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->changepasslabel2->Location = System::Drawing::Point(81, 130);
			this->changepasslabel2->Name = L"changepasslabel2";
			this->changepasslabel2->Size = System::Drawing::Size(130, 20);
			this->changepasslabel2->TabIndex = 2;
			this->changepasslabel2->Text = L"Старый пароль:";
			// 
			// changepasslabel3
			// 
			this->changepasslabel3->AutoSize = true;
			this->changepasslabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->changepasslabel3->Location = System::Drawing::Point(89, 165);
			this->changepasslabel3->Name = L"changepasslabel3";
			this->changepasslabel3->Size = System::Drawing::Size(122, 20);
			this->changepasslabel3->TabIndex = 3;
			this->changepasslabel3->Text = L"Новый пароль:";
			// 
			// changepasslabel4
			// 
			this->changepasslabel4->AutoSize = true;
			this->changepasslabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->changepasslabel4->Location = System::Drawing::Point(26, 200);
			this->changepasslabel4->Name = L"changepasslabel4";
			this->changepasslabel4->Size = System::Drawing::Size(185, 20);
			this->changepasslabel4->TabIndex = 4;
			this->changepasslabel4->Text = L"Повтор нового пароля:";
			// 
			// restorepasslabel1
			// 
			this->restorepasslabel1->AutoSize = true;
			this->restorepasslabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->restorepasslabel1->Location = System::Drawing::Point(120, 114);
			this->restorepasslabel1->Name = L"restorepasslabel1";
			this->restorepasslabel1->Size = System::Drawing::Size(59, 20);
			this->restorepasslabel1->TabIndex = 1;
			this->restorepasslabel1->Text = L"Логин:";
			// 
			// restorepasslabel2
			// 
			this->restorepasslabel2->AutoSize = true;
			this->restorepasslabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->restorepasslabel2->Location = System::Drawing::Point(127, 150);
			this->restorepasslabel2->Name = L"restorepasslabel2";
			this->restorepasslabel2->Size = System::Drawing::Size(52, 20);
			this->restorepasslabel2->TabIndex = 2;
			this->restorepasslabel2->Text = L"Email:";
			// 
			// registerpictureBox1
			// 
			this->registerpictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"registerpictureBox1.BackgroundImage")));
			this->registerpictureBox1->Location = System::Drawing::Point(219, 89);
			this->registerpictureBox1->Name = L"registerpictureBox1";
			this->registerpictureBox1->Size = System::Drawing::Size(170, 29);
			this->registerpictureBox1->TabIndex = 21;
			this->registerpictureBox1->TabStop = false;
			// 
			// registerpictureBox2
			// 
			this->registerpictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"registerpictureBox2.BackgroundImage")));
			this->registerpictureBox2->Location = System::Drawing::Point(219, 124);
			this->registerpictureBox2->Name = L"registerpictureBox2";
			this->registerpictureBox2->Size = System::Drawing::Size(170, 29);
			this->registerpictureBox2->TabIndex = 22;
			this->registerpictureBox2->TabStop = false;
			// 
			// registerpictureBox3
			// 
			this->registerpictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"registerpictureBox3.BackgroundImage")));
			this->registerpictureBox3->Location = System::Drawing::Point(219, 159);
			this->registerpictureBox3->Name = L"registerpictureBox3";
			this->registerpictureBox3->Size = System::Drawing::Size(170, 29);
			this->registerpictureBox3->TabIndex = 23;
			this->registerpictureBox3->TabStop = false;
			// 
			// registerpictureBox4
			// 
			this->registerpictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"registerpictureBox4.BackgroundImage")));
			this->registerpictureBox4->Location = System::Drawing::Point(219, 194);
			this->registerpictureBox4->Name = L"registerpictureBox4";
			this->registerpictureBox4->Size = System::Drawing::Size(170, 29);
			this->registerpictureBox4->TabIndex = 24;
			this->registerpictureBox4->TabStop = false;
			// 
			// changepasspictureBox1
			// 
			this->changepasspictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"changepasspictureBox1.BackgroundImage")));
			this->changepasspictureBox1->Location = System::Drawing::Point(219, 89);
			this->changepasspictureBox1->Name = L"changepasspictureBox1";
			this->changepasspictureBox1->Size = System::Drawing::Size(170, 29);
			this->changepasspictureBox1->TabIndex = 21;
			this->changepasspictureBox1->TabStop = false;
			// 
			// changepasspictureBox2
			// 
			this->changepasspictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"changepasspictureBox2.BackgroundImage")));
			this->changepasspictureBox2->Location = System::Drawing::Point(219, 124);
			this->changepasspictureBox2->Name = L"changepasspictureBox2";
			this->changepasspictureBox2->Size = System::Drawing::Size(170, 29);
			this->changepasspictureBox2->TabIndex = 22;
			this->changepasspictureBox2->TabStop = false;
			// 
			// changepasspictureBox3
			// 
			this->changepasspictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"changepasspictureBox3.BackgroundImage")));
			this->changepasspictureBox3->Location = System::Drawing::Point(219, 159);
			this->changepasspictureBox3->Name = L"changepasspictureBox3";
			this->changepasspictureBox3->Size = System::Drawing::Size(170, 29);
			this->changepasspictureBox3->TabIndex = 23;
			this->changepasspictureBox3->TabStop = false;
			// 
			// changepasspictureBox4
			// 
			this->changepasspictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"changepasspictureBox4.BackgroundImage")));
			this->changepasspictureBox4->Location = System::Drawing::Point(219, 194);
			this->changepasspictureBox4->Name = L"changepasspictureBox4";
			this->changepasspictureBox4->Size = System::Drawing::Size(170, 29);
			this->changepasspictureBox4->TabIndex = 24;
			this->changepasspictureBox4->TabStop = false;
			// 
			// restorepasspictureBox1
			// 
			this->restorepasspictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"restorepasspictureBox1.BackgroundImage")));
			this->restorepasspictureBox1->Location = System::Drawing::Point(189, 109);
			this->restorepasspictureBox1->Name = L"restorepasspictureBox1";
			this->restorepasspictureBox1->Size = System::Drawing::Size(170, 29);
			this->restorepasspictureBox1->TabIndex = 21;
			this->restorepasspictureBox1->TabStop = false;
			// 
			// restorepasspictureBox2
			// 
			this->restorepasspictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"restorepasspictureBox2.BackgroundImage")));
			this->restorepasspictureBox2->Location = System::Drawing::Point(189, 144);
			this->restorepasspictureBox2->Name = L"restorepasspictureBox2";
			this->restorepasspictureBox2->Size = System::Drawing::Size(170, 29);
			this->restorepasspictureBox2->TabIndex = 22;
			this->restorepasspictureBox2->TabStop = false;
			// 
			// registerpanel
			// 
			this->registerpanel->BackColor = System::Drawing::Color::Transparent;
			this->registerpanel->Controls->Add(this->registertextBox1_login);
			this->registerpanel->Controls->Add(this->registerpictureBox1);
			this->registerpanel->Controls->Add(this->registertextBox2_pass);
			this->registerpanel->Controls->Add(this->registerpictureBox2);
			this->registerpanel->Controls->Add(this->registertextBox2_pass2);
			this->registerpanel->Controls->Add(this->registerpictureBox3);
			this->registerpanel->Controls->Add(this->registertextBox3_email);
			this->registerpanel->Controls->Add(this->registerpictureBox4);
			this->registerpanel->Controls->Add(this->regbutton);
			this->registerpanel->Controls->Add(this->backbutton1);
			this->registerpanel->Controls->Add(this->registerlabel1);
			this->registerpanel->Controls->Add(this->registerlabel2);
			this->registerpanel->Controls->Add(this->registerlabel3);
			this->registerpanel->Controls->Add(this->registerlabel4);
			this->registerpanel->Location = System::Drawing::Point(146, 12);
			this->registerpanel->Name = L"registerpanel";
			this->registerpanel->Size = System::Drawing::Size(476, 359);
			this->registerpanel->TabIndex = 17;
			this->registerpanel->Visible = false;
			// 
			// registertextBox1_login
			// 
			this->registertextBox1_login->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->registertextBox1_login->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->registertextBox1_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->registertextBox1_login->Location = System::Drawing::Point(225, 95);
			this->registertextBox1_login->Name = L"registertextBox1_login";
			this->registertextBox1_login->Size = System::Drawing::Size(158, 17);
			this->registertextBox1_login->TabIndex = 1;
			// 
			// registertextBox2_pass
			// 
			this->registertextBox2_pass->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->registertextBox2_pass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->registertextBox2_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->registertextBox2_pass->Location = System::Drawing::Point(225, 130);
			this->registertextBox2_pass->Name = L"registertextBox2_pass";
			this->registertextBox2_pass->PasswordChar = '*';
			this->registertextBox2_pass->Size = System::Drawing::Size(158, 17);
			this->registertextBox2_pass->TabIndex = 3;
			// 
			// registertextBox2_pass2
			// 
			this->registertextBox2_pass2->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->registertextBox2_pass2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->registertextBox2_pass2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->registertextBox2_pass2->Location = System::Drawing::Point(225, 165);
			this->registertextBox2_pass2->Name = L"registertextBox2_pass2";
			this->registertextBox2_pass2->PasswordChar = '*';
			this->registertextBox2_pass2->Size = System::Drawing::Size(158, 17);
			this->registertextBox2_pass2->TabIndex = 3;
			// 
			// registertextBox3_email
			// 
			this->registertextBox3_email->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->registertextBox3_email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->registertextBox3_email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->registertextBox3_email->Location = System::Drawing::Point(225, 200);
			this->registertextBox3_email->Name = L"registertextBox3_email";
			this->registertextBox3_email->Size = System::Drawing::Size(158, 17);
			this->registertextBox3_email->TabIndex = 3;
			// 
			// regbutton
			// 
			this->regbutton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->regbutton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->regbutton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->regbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->regbutton->ForeColor = System::Drawing::Color::Cornsilk;
			this->regbutton->Location = System::Drawing::Point(145, 236);
			this->regbutton->Name = L"regbutton";
			this->regbutton->Size = System::Drawing::Size(218, 23);
			this->regbutton->TabIndex = 8;
			this->regbutton->Text = L"Зарегистрироваться";
			this->regbutton->UseVisualStyleBackColor = true;
			this->regbutton->Click += gcnew System::EventHandler(this, &Form1::regbutton_Click);
			this->regbutton->MouseEnter += gcnew System::EventHandler(this, &Form1::vButtonMouseEnter);
			this->regbutton->MouseLeave += gcnew System::EventHandler(this, &Form1::vButtonMouseLeave);
			// 
			// changepasspanel
			// 
			this->changepasspanel->BackColor = System::Drawing::Color::Transparent;
			this->changepasspanel->Controls->Add(this->changepasstextBox1_login);
			this->changepasspanel->Controls->Add(this->changepasspictureBox1);
			this->changepasspanel->Controls->Add(this->changepasstextBox2_oldpass);
			this->changepasspanel->Controls->Add(this->changepasspictureBox2);
			this->changepasspanel->Controls->Add(this->changepasstextBox2_newpass);
			this->changepasspanel->Controls->Add(this->changepasspictureBox3);
			this->changepasspanel->Controls->Add(this->changepasstextBox2_newpass2);
			this->changepasspanel->Controls->Add(this->changepasspictureBox4);
			this->changepasspanel->Controls->Add(this->cpbutton);
			this->changepasspanel->Controls->Add(this->backbutton2);
			this->changepasspanel->Controls->Add(this->changepasslabel1);
			this->changepasspanel->Controls->Add(this->changepasslabel2);
			this->changepasspanel->Controls->Add(this->changepasslabel3);
			this->changepasspanel->Controls->Add(this->changepasslabel4);
			this->changepasspanel->Location = System::Drawing::Point(146, 12);
			this->changepasspanel->Name = L"changepasspanel";
			this->changepasspanel->Size = System::Drawing::Size(476, 359);
			this->changepasspanel->TabIndex = 17;
			this->changepasspanel->Visible = false;
			// 
			// changepasstextBox1_login
			// 
			this->changepasstextBox1_login->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->changepasstextBox1_login->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->changepasstextBox1_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->changepasstextBox1_login->Location = System::Drawing::Point(225, 95);
			this->changepasstextBox1_login->Name = L"changepasstextBox1_login";
			this->changepasstextBox1_login->Size = System::Drawing::Size(158, 17);
			this->changepasstextBox1_login->TabIndex = 1;
			// 
			// changepasstextBox2_oldpass
			// 
			this->changepasstextBox2_oldpass->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->changepasstextBox2_oldpass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->changepasstextBox2_oldpass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->changepasstextBox2_oldpass->Location = System::Drawing::Point(225, 130);
			this->changepasstextBox2_oldpass->Name = L"changepasstextBox2_oldpass";
			this->changepasstextBox2_oldpass->PasswordChar = '*';
			this->changepasstextBox2_oldpass->Size = System::Drawing::Size(158, 17);
			this->changepasstextBox2_oldpass->TabIndex = 3;
			// 
			// changepasstextBox2_newpass
			// 
			this->changepasstextBox2_newpass->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->changepasstextBox2_newpass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->changepasstextBox2_newpass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->changepasstextBox2_newpass->Location = System::Drawing::Point(225, 165);
			this->changepasstextBox2_newpass->Name = L"changepasstextBox2_newpass";
			this->changepasstextBox2_newpass->PasswordChar = '*';
			this->changepasstextBox2_newpass->Size = System::Drawing::Size(158, 17);
			this->changepasstextBox2_newpass->TabIndex = 3;
			// 
			// changepasstextBox2_newpass2
			// 
			this->changepasstextBox2_newpass2->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->changepasstextBox2_newpass2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->changepasstextBox2_newpass2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->changepasstextBox2_newpass2->Location = System::Drawing::Point(225, 200);
			this->changepasstextBox2_newpass2->Name = L"changepasstextBox2_newpass2";
			this->changepasstextBox2_newpass2->PasswordChar = '*';
			this->changepasstextBox2_newpass2->Size = System::Drawing::Size(158, 17);
			this->changepasstextBox2_newpass2->TabIndex = 3;
			// 
			// cpbutton
			// 
			this->cpbutton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->cpbutton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->cpbutton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->cpbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cpbutton->ForeColor = System::Drawing::Color::Cornsilk;
			this->cpbutton->Location = System::Drawing::Point(130, 236);
			this->cpbutton->Name = L"cpbutton";
			this->cpbutton->Size = System::Drawing::Size(218, 23);
			this->cpbutton->TabIndex = 8;
			this->cpbutton->Text = L"Изменить пароль";
			this->cpbutton->UseVisualStyleBackColor = true;
			this->cpbutton->Click += gcnew System::EventHandler(this, &Form1::cpbutton_Click);
			this->cpbutton->MouseEnter += gcnew System::EventHandler(this, &Form1::vButtonMouseEnter);
			this->cpbutton->MouseLeave += gcnew System::EventHandler(this, &Form1::vButtonMouseLeave);
			// 
			// restorepasspanel
			// 
			this->restorepasspanel->BackColor = System::Drawing::Color::Transparent;
			this->restorepasspanel->Controls->Add(this->restorepasstextBox1_login);
			this->restorepasspanel->Controls->Add(this->restorepasspictureBox1);
			this->restorepasspanel->Controls->Add(this->restorepasstextBox2_email);
			this->restorepasspanel->Controls->Add(this->restorepasspictureBox2);
			this->restorepasspanel->Controls->Add(this->rpbutton);
			this->restorepasspanel->Controls->Add(this->backbutton3);
			this->restorepasspanel->Controls->Add(this->restorepasslabel1);
			this->restorepasspanel->Controls->Add(this->restorepasslabel2);
			this->restorepasspanel->Location = System::Drawing::Point(146, 12);
			this->restorepasspanel->Name = L"restorepasspanel";
			this->restorepasspanel->Size = System::Drawing::Size(476, 359);
			this->restorepasspanel->TabIndex = 17;
			this->restorepasspanel->Visible = false;
			// 
			// restorepasstextBox1_login
			// 
			this->restorepasstextBox1_login->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->restorepasstextBox1_login->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->restorepasstextBox1_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->restorepasstextBox1_login->Location = System::Drawing::Point(195, 115);
			this->restorepasstextBox1_login->Name = L"restorepasstextBox1_login";
			this->restorepasstextBox1_login->Size = System::Drawing::Size(158, 17);
			this->restorepasstextBox1_login->TabIndex = 1;
			// 
			// restorepasstextBox2_email
			// 
			this->restorepasstextBox2_email->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->restorepasstextBox2_email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->restorepasstextBox2_email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->restorepasstextBox2_email->Location = System::Drawing::Point(195, 150);
			this->restorepasstextBox2_email->Name = L"restorepasstextBox2_email";
			this->restorepasstextBox2_email->Size = System::Drawing::Size(158, 17);
			this->restorepasstextBox2_email->TabIndex = 3;
			// 
			// rpbutton
			// 
			this->rpbutton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->rpbutton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->rpbutton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->rpbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rpbutton->ForeColor = System::Drawing::Color::Cornsilk;
			this->rpbutton->Location = System::Drawing::Point(131, 182);
			this->rpbutton->Name = L"rpbutton";
			this->rpbutton->Size = System::Drawing::Size(218, 23);
			this->rpbutton->TabIndex = 8;
			this->rpbutton->Text = L"Восстановить пароль";
			this->rpbutton->UseVisualStyleBackColor = true;
			this->rpbutton->Click += gcnew System::EventHandler(this, &Form1::rpbutton_Click);
			this->rpbutton->MouseEnter += gcnew System::EventHandler(this, &Form1::vButtonMouseEnter);
			this->rpbutton->MouseLeave += gcnew System::EventHandler(this, &Form1::vButtonMouseLeave);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->comboBox2);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->trackBar1);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->comboBox1);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->checkBox1);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Location = System::Drawing::Point(146, 12);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(476, 359);
			this->panel3->TabIndex = 18;
			this->panel3->Visible = false;
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(109)), 
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->comboBox2->DisplayMember = L"0";
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(314, 164);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(138, 26);
			this->comboBox2->TabIndex = 12;
			this->comboBox2->Visible = false;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox2_SelectedIndexChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(239, 167);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(69, 20);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Сервер:";
			this->label12->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(320, 128);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(46, 20);
			this->label11->TabIndex = 10;
			this->label11->Text = L"0 МБ";
			// 
			// trackBar1
			// 
			this->trackBar1->AutoSize = false;
			this->trackBar1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(79)), 
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->trackBar1->LargeChange = 256;
			this->trackBar1->Location = System::Drawing::Point(210, 128);
			this->trackBar1->Maximum = 8192;
			this->trackBar1->Minimum = 512;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(104, 26);
			this->trackBar1->SmallChange = 256;
			this->trackBar1->TabIndex = 9;
			this->trackBar1->TickFrequency = 256;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar1->Value = 512;
			this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &Form1::trackBar1_ValueChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline));
			this->label4->ForeColor = System::Drawing::Color::Blue;
			this->label4->Location = System::Drawing::Point(329, 343);
			this->label4->Margin = System::Windows::Forms::Padding(3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Открыть папку с клиентом";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(109)), 
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->comboBox1->DisplayMember = L"0";
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"частичная", L"полная"});
			this->comboBox1->Location = System::Drawing::Point(138, 164);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(95, 26);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(45, 167);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Проверка:";
			// 
			// checkBox1
			// 
			this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox1->AutoSize = true;
			this->checkBox1->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->checkBox1->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->checkBox1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->checkBox1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(43, 200);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(223, 30);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Всегда играть в оффлайн";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(43, 128);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(161, 20);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Выделение памяти:";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->Controls->Add(this->button7);
			this->panel4->Controls->Add(this->groupBox2);
			this->panel4->Controls->Add(this->button8);
			this->panel4->Controls->Add(this->groupBox1);
			this->panel4->Location = System::Drawing::Point(146, 12);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(476, 359);
			this->panel4->TabIndex = 20;
			this->panel4->Visible = false;
			// 
			// button7
			// 
			this->button7->Enabled = false;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button7->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::Cornsilk;
			this->button7->Location = System::Drawing::Point(331, 182);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(107, 23);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Подтвердить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			this->button7->MouseEnter += gcnew System::EventHandler(this, &Form1::vButtonMouseEnter);
			this->button7->MouseLeave += gcnew System::EventHandler(this, &Form1::vButtonMouseLeave);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->pictureBox4);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox2->Location = System::Drawing::Point(185, 39);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(140, 281);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Новый скин";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(6, 19);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(128, 256);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button8->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::Color::Cornsilk;
			this->button8->Location = System::Drawing::Point(331, 153);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(107, 23);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Загрузить новый";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			this->button8->MouseEnter += gcnew System::EventHandler(this, &Form1::vButtonMouseEnter);
			this->button8->MouseLeave += gcnew System::EventHandler(this, &Form1::vButtonMouseLeave);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox5);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(39, 39);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(140, 281);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Текущий скин";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(6, 19);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(128, 256);
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button2->ForeColor = System::Drawing::Color::Cornsilk;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(12, 85);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 68);
			this->button2->TabIndex = 67;
			this->button2->Text = L"Сайт";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			this->button2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::vButtonMouseClick);
			this->button2->MouseEnter += gcnew System::EventHandler(this, &Form1::vButtonMouseEnter);
			this->button2->MouseLeave += gcnew System::EventHandler(this, &Form1::vButtonMouseLeave);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(171, 407);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(313, 18);
			this->label7->TabIndex = 68;
			this->label7->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Minecraft Skins|*.png";
			this->openFileDialog1->Title = L"Загрузка скина";
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"vLauncher GameGuard [НЕ ДОСТУПНО В ТЕКУЩЕЙ ВЕРСИИ]";
			this->notifyIcon1->Visible = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(634, 464);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->FocusKeeper);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->registerpanel);
			this->Controls->Add(this->restorepasspanel);
			this->Controls->Add(this->changepasspanel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(650, 502);
			this->MinimumSize = System::Drawing::Size(650, 502);
			this->Name = L"Form1";
			this->Opacity = 0.99;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"vLauncher [RELOADED]";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseMove);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->registerpictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->registerpictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->registerpictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->registerpictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->changepasspictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->changepasspictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->changepasspictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->changepasspictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->restorepasspictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->restorepasspictureBox2))->EndInit();
			this->registerpanel->ResumeLayout(false);
			this->registerpanel->PerformLayout();
			this->changepasspanel->ResumeLayout(false);
			this->changepasspanel->PerformLayout();
			this->restorepasspanel->ResumeLayout(false);
			this->restorepasspanel->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

///////////////////////////////////////////////////////////////////////////

public:
	int memory;
	System::Net::WebClient ^W;
	array<String^>^Files;		
	array<String^>^Hashes;
	array<String^>^Strings;
	Thread^ UpdaterThread;
	Thread^ StatusThread;
	bool playonline;
	int FileCount;
	SettingsSaver ^USER_SETTINGS;
	SETTINGS ^s;
	bool settings_read;
	int M_X,M_Y;
	bool LoggedIn;
	bool UpdateSuccess;
	Bitmap ^skin_to_load;
	array<Byte>^SkinData;

			bool GetFileTable(bool full){
				label7->Text="Получение файловой таблицы...";
				String ^List;
				FileCount=0;
				try
				{
					if (full)
						List=W->DownloadString(s->UpdURL+s->MainFileName+"?action=getfiles&mode=full");
					else
						List=W->DownloadString(s->UpdURL+s->MainFileName+"?action=getfiles&mode=mini");
					List=List->Replace("client/","");

					Strings=List->Split('*');
					Files=gcnew array<String^>((Strings->Length)/2);
					Hashes=gcnew array<String^>((Strings->Length)/2);
					for (int i=0;i<Strings->Length-1;i+=2)
					{
						Files[FileCount]=Strings[i];
						Hashes[FileCount]=Strings[i+1];
						FileCount++;

					}
					return true;
				}
				catch (Exception ^WE)
				{return false;}


			}
			bool DownloadFile(String^Filename){
				label7->Text="Загрузка файла: "+Filename->Substring((!(1+Filename->LastIndexOf('/')))?0:Filename->LastIndexOf('/')+1);
				try{
					String ^f=Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData)+"\\"+s->FolderName+"\\"+Filename->Replace("/","\\");
					String ^dir=f->Remove(f->LastIndexOf("\\"));
					if (!IO::Directory::Exists(dir))
						IO::DirectoryInfo^ di = IO::Directory::CreateDirectory(dir);

					W->DownloadFile(s->UpdURL+"client/"+Filename,f);
					return true;
				}
				catch(Exception ^EX){return false;}
			}
			String^ GetMD5(String^ fileName)
			{   try{   
				System::IO::FileStream file(fileName, System::IO::FileMode::Open);
				System::Security::Cryptography::MD5CryptoServiceProvider md5;
				array<unsigned char>^ retVal = md5.ComputeHash(%file);
				System::Text::StringBuilder^ sBuilder = gcnew System::Text::StringBuilder();
				for (int i = 0; i < retVal->Length; i++)	{
					sBuilder->Append(retVal[i].ToString("x2"));
				}
				return sBuilder->ToString()->ToLower();}
			catch(Exception ^EX){return "";}
			}
			bool CheckAllFiles(){
				for (int i=0;i<FileCount;i++)
				{
					ShowProgress((((i+1.0)/FileCount))*100);
					label7->Text="Проверка файла: "+Files[i]->Substring((!(1+Files[i]->LastIndexOf('/')))?0:Files[i]->LastIndexOf('/')+1);
					if (!(GetMD5(Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData)+"/"+s->FolderName+"/"+Files[i])==Hashes[i]))
					{

						if(!DownloadFile(Files[i])) return false;
					}
				}
				return true;
			}
			void StartMinecraft(String ^nickname,int memory){
				System::Diagnostics::Process::Start(
					"javaw", 
					String::Format(
					"-Xmx{0}m -Djava.library.path={1}/{3}/bin/natives -cp " +
					"{1}/{3}/bin/minecraft.jar;" +
					"{1}/{3}/bin/jinput.jar;" +
					"{1}/{3}/bin/lwjgl.jar;" +
					"{1}/{3}/bin/lwjgl_util.jar net.minecraft.client.Minecraft {2}",
					memory,Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData), nickname, s->FolderName));
				this->Close();

			}
			/*System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				String ^loginfile=Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData)+"\\"+s->FolderName+"\\vLogin.dat";
				IO::File::WriteAllText(loginfile,textBox1->Text);
				loginfile=Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData)+"\\"+s->FolderName+"\\vMemory.dat";
				IO::File::WriteAllText(loginfile,trackBar1->Value.ToString());
				if (playonline)
					mcstart(textBox1->Text,Convert::ToInt16(trackBar1->Value));
				else mcstart("",Convert::ToInt16(trackBar1->Value));
			private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
					 }
}*/
			void GetServerStatus(){
					 try
					 {Socket ^sock=gcnew Socket(AddressFamily::InterNetwork,SocketType::Stream,ProtocolType::Tcp);
					 IPHostEntry^ hostInfo = Dns::Resolve(s->ServerIP);		
					 NetworkInformation::Ping ^ping=gcnew NetworkInformation::Ping;
					 String^ data = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
					 array<Byte>^buffer = Encoding::ASCII->GetBytes( data );
					 PingOptions ^ options = gcnew PingOptions( 64,true );
					 PingReply ^ pr;
					 sock->Connect(hostInfo->AddressList[0],s->ServerPort);
					 if (sock->Connected)	{
						 label9->Text="ONLINE";
						 label9->ForeColor=Drawing::Color::LimeGreen ;
						 sock->Close();
						 pr=ping->Send(hostInfo->AddressList[0],5000,buffer,options);
						 label10->Text="Ping: "+pr->RoundtripTime.ToString()+"ms";
						 StatusThread->Abort();
						 return;
					 }
					 sock->Close();
					 }catch(Exception ^E){StatusThread->Abort();}
				 }
			void Updater(){
					 if(true){
						 if(GetFileTable(USER_SETTINGS->US->FullClient)){
							 if(CheckAllFiles()){
								 USER_SETTINGS->US->FullClient=0;
								 comboBox1->SelectedIndex=0;
								 
								 StartMinecraft(USER_SETTINGS->US->Login,USER_SETTINGS->US->Memory);
								 
								 this->Close();
							 }
							 else {MessageBox::Show("Ошибка проверки:( Вы будете играть оффлайн!");StartMinecraft("",USER_SETTINGS->US->Memory);this->Close();}
						 }
						 else {MessageBox::Show("Ошибка проверки:( Вы будете играть оффлайн!");StartMinecraft("",USER_SETTINGS->US->Memory);this->Close();}
					 }
					 else {MessageBox::Show("Ошибка проверки:( Вы будете играть оффлайн!");StartMinecraft("",USER_SETTINGS->US->Memory);this->Close();}
				 }
			void Register(bool regsilent)
			{
				if (!registertextBox1_login->Enabled)
				{
					regbutton->Enabled=true;
					registertextBox1_login->Enabled=true;
					registertextBox2_pass->Enabled=true;
					registertextBox2_pass2->Enabled=true;
					registertextBox3_email->Enabled=true;
					return;
				}

				String ^regresult;

				String^regLogin=registertextBox1_login->Text;
				String^regEmail=registertextBox3_email->Text;
				String^regPass=registertextBox2_pass->Text;
				String^regPass2=registertextBox2_pass2->Text;

				try 
				{regresult=W->DownloadString(s->UpdURL+s->MainFileName+"?action=register&login="+regLogin+"&regpass="+regPass+"&regpass2="+regPass2+"&email="+regEmail);}
				catch(Exception ^E){if (!regsilent) MessageBox::Show("Ошибка подключения!"); return;}
				if (regresult=="OK")
				{
					MessageBox::Show("Регистрация прошла успешно!");
					return;
				}
				else
					if (!regsilent) MessageBox::Show("Ошибка регистрации!\nОтвет сервера: "+regresult);
			}
			void ChangePass(bool cpsilent)
			{
				if (!changepasstextBox1_login->Enabled)
				{
					cpbutton->Enabled=true;
					changepasstextBox1_login->Enabled=true;
					changepasstextBox2_oldpass->Enabled=true;
					changepasstextBox2_newpass->Enabled=true;
					changepasstextBox2_newpass2->Enabled=true;
					return;
				}

				String ^cpresult;

				String^cpLogin=changepasstextBox1_login->Text;
				String^cpOldPass=changepasstextBox2_oldpass->Text;
				String^cpNewPass=changepasstextBox2_newpass->Text;
				String^cpNewPass2=changepasstextBox2_newpass2->Text;

				try 
				{cpresult=W->DownloadString(s->UpdURL+s->MainFileName+"?action=changepass&login="+cpLogin+"&oldpass="+cpOldPass+"&newpass="+cpNewPass+"&newpass2="+cpNewPass2);}
				catch(Exception ^E){if (!cpsilent) MessageBox::Show("Ошибка подключения!"); return;}
				if (cpresult=="OK")
				{
					MessageBox::Show("Изменение пароля прошло успешно!");
					button9->Text="Войти";
					textBox1_login->Enabled=true;
					textBox2_pass->Enabled=true;
					LoggedIn=false;
					return;
				}
				else
					if (!cpsilent) MessageBox::Show("Ошибка изменения пароля!\nОтвет сервера: "+cpresult);
			}
			void RestorePass(bool rpsilent)
			{
				if (!restorepasstextBox1_login->Enabled)
				{
					rpbutton->Enabled=true;
					restorepasstextBox1_login->Enabled=true;
					restorepasstextBox2_email->Enabled=true;
					return;
				}

				String ^rpresult;

				String^rpLogin=restorepasstextBox1_login->Text;
				String^rpEmail=restorepasstextBox2_email->Text;

				try 
				{rpresult=W->DownloadString(s->UpdURL+s->MainFileName+"?action=restorepass&login="+rpLogin+"&email="+rpEmail);}
				catch(Exception ^E){if (!rpsilent) MessageBox::Show("Ошибка подключения!"); return;}
				if (rpresult=="OK")
				{
					MessageBox::Show("Восстановление прошло успешно!\nПроверьте свою почту!");
					button9->Text="Войти";
					textBox1_login->Enabled=true;
					textBox2_pass->Enabled=true;
					LoggedIn=false;
					return;
				}
				else
					if (!rpsilent) MessageBox::Show("Ошибка восстановления!\nОтвет сервера: "+rpresult);
			}
			void Login(bool silent)
			{
				if (!textBox1_login->Enabled)
				{
					button9->Text="Войти";
					textBox1_login->Enabled=true;
					textBox2_pass->Enabled=true;
					USER_SETTINGS->US->AutoLogin=false;
					LoggedIn=false;
					registerbutton->Enabled=true;
					changepassbutton->Enabled=true;
					restorepassbutton->Enabled=true;
					return;
				}
				System::Security::Cryptography::MD5CryptoServiceProvider md5;
				//String ^datapass=textBox2_pass->Text+s->SecretKey;
				System::Text::Encoding ^enc=System::Text::Encoding::Default;

				array<unsigned char>^ retVal = md5.ComputeHash(enc->GetBytes(textBox2_pass->Text));
				System::Text::StringBuilder^ sBuilder = gcnew System::Text::StringBuilder();
				for (int i = 0; i < retVal->Length; i++)	{
					sBuilder->Append(retVal[i].ToString("x2"));
				}
				retVal = md5.ComputeHash(enc->GetBytes(sBuilder->ToString()->ToLower()+s->SecretKey));
				sBuilder = gcnew System::Text::StringBuilder();
				for (int i = 0; i < retVal->Length; i++)	{
					sBuilder->Append(retVal[i].ToString("x2"));
				}
				String^md5_pass=sBuilder->ToString()->ToLower();
				String ^result;
				try 
				{result=W->DownloadString(s->UpdURL+s->MainFileName+"?action=auth&login="+USER_SETTINGS->US->Login+"&token="+md5_pass);}
				catch(Exception ^E){if (!silent) MessageBox::Show("Ошибка подключения!"); return;}
				if (result=="OK")
				{
					textBox1_login->Enabled=false;
					textBox2_pass->Enabled=false;
					button9->Text="Выйти";
					USER_SETTINGS->US->AutoLogin=true;
					LoggedIn=true;
					registerbutton->Enabled=false;
					changepassbutton->Enabled=false;
					restorepassbutton->Enabled=false;
					return;
				}
				else
					if (!silent) MessageBox::Show("Ошибка авторизации!\nОтвет сервера: "+result);
			}
			Bitmap^ ShowSkin(Bitmap^ skin)
			{
				Bitmap ^bmp=gcnew Bitmap(128,256);
				Graphics ^g=Graphics::FromImage(bmp);
				
				//Head				 
				for (int i=0;i<8;i++)
					for (int j=0;j<8;j++)
						g->FillRectangle(gcnew SolidBrush(skin->GetPixel(i+8,j+8)),(i+4)*8,j*8,8,8);
				//Hands
				for (int i=0;i<4;i++)
					for (int j=0;j<12;j++)
					{
						g->FillRectangle(gcnew SolidBrush(skin->GetPixel(i+44,j+20)),i*8,(j+8)*8,8,8);
						g->FillRectangle(gcnew SolidBrush(skin->GetPixel(i+44,j+20)),(i+12)*8,(j+8)*8,8,8);
					}
					//Body
					for (int i=0;i<8;i++)
						for (int j=0;j<12;j++)
							g->FillRectangle(gcnew SolidBrush(skin->GetPixel(i+20,j+20)),(i+4)*8,(j+8)*8,8,8);
					//Legs
					for (int i=0;i<4;i++)
						for (int j=0;j<12;j++)
						{
							g->FillRectangle(gcnew SolidBrush(skin->GetPixel(i+4,j+20)),(i+4)*8,(j+20)*8,8,8);
							g->FillRectangle(gcnew SolidBrush(skin->GetPixel(i+4,j+20)),(i+8)*8,(j+20)*8,8,8);
						}
					return bmp;
					//i=;
					//img->FromHbitmap((IntPtr)&B);
			}
			void ShowProgress(double progress_percent)
			{
				progress_percent=((int)(progress_percent*100))/100.;
				label1->Text=Convert::ToString(progress_percent)+"%";
				(pictureBox3->CreateGraphics())->DrawImageUnscaledAndClipped(progress_image,Rectangle(0,0,(int)pictureBox3->Width*(progress_percent/100),pictureBox3->Height));

			}
/* !TODO */ void UpdateLauncher()
			{
				Form2 ^f=gcnew Form2();
				f->CurrentVer=s->Version;
				f->UpdateUrl=s->UpdURL;
				f->FileName=s->MainFileName;

				f->ShowDialog(this);	
				if (!f->UpdateSuccess) Diagnostics::Process::GetCurrentProcess()->Kill();
			}

///////////////////////////////////////////////////////////////////////////

private: System::Void Form1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 M_X=e->X;
				 M_Y=e->Y;
			 }
private: System::Void Form1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if (e->Button == System::Windows::Forms::MouseButtons::Left){					 
					 this->Top+=(e->Y-M_Y);
					 this->Left+=(e->X-M_X);
					 }
			 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 notifyIcon1->ShowBalloonTip(3000,"vLauncher GameGuard","vLauncher запущен!",ToolTipIcon::Info);
			 LoggedIn=false;
			 settings_read=false;
				 s=gcnew SETTINGS;
				 USER_SETTINGS=gcnew SettingsSaver("Settings.vL");
				 if (s->EnableMultiServerSupport)
				 {
					 comboBox2->Visible=true;
					 label12->Visible=true;
					 s->LoadSettingsFromServer(USER_SETTINGS->US->ServerID);
					 for (int i=0;i<s->ServerCount;i++)
						comboBox2->Items->Add(s->Servers[i]->Name);
					 comboBox2->SelectedIndex=USER_SETTINGS->US->ServerID;
				 }
				 //Проверяем обновления лаунчера
				 UpdateLauncher();
				 W = gcnew System::Net::WebClient;
				 
				 trackBar1->Value=1024;
				 trackBar1->Value=USER_SETTINGS->US->Memory;
				 comboBox1->SelectedIndex=USER_SETTINGS->US->FullClient;
				 checkBox1->Checked=USER_SETTINGS->US->AlwaysPlayOffline;
				 checkBox1_save_pass->Checked=USER_SETTINGS->US->RememberPass;
				 textBox1_login->Text=USER_SETTINGS->US->Login;
				 textBox2_pass->Text=USER_SETTINGS->US->Password;
				 //USER_SETTINGS->Set(trackBar1->Value, comboBox1->SelectedIndex,checkBox1->Checked,checkBox1_save_pass->Checked,textBox1_login->Text,textBox2_pass->Text);
				settings_read=true;
				 System::Windows::Forms::Control::CheckForIllegalCrossThreadCalls = false;
				 UpdaterThread = gcnew Thread(gcnew ThreadStart(this,&Form1::Updater));
				 StatusThread = gcnew Thread(gcnew ThreadStart(this,&Form1::GetServerStatus));
				 StatusThread->Start();	
				 if (USER_SETTINGS->US->AutoLogin)
					 Login(true);
				 pictureBox3->Refresh();
				 FocusKeeper->Focus();
				 System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
				 progress_image=(cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"FocusKeeper.Image")));
				 
				 Text=s->vLauncherName;
				 webBrowser1->AllowNavigation=s->BrowserNav;
				 webBrowser1->ScrollBarsEnabled=s->BrowserScr;
				 webBrowser1->Navigate(s->NewsURL,false);
				 webBrowser1->Refresh(WebBrowserRefreshOption::Completely);
				 playonline=false;
			 }
private: System::Void vButtonMouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 ((Button^)sender)->FlatAppearance->BorderColor=Color::LightGoldenrodYellow;
		 }
private: System::Void vButtonMouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 ((Button^)sender)->FlatAppearance->BorderColor=Color::Black;
		 }
private: System::Void vButtonMouseClick(System::Object^  sender, MouseEventArgs^  e) {
			 ((Button^)sender)->FlatAppearance->BorderSize=2;
			 FocusKeeper->Focus();
			 ((Button^)sender)->FlatAppearance->BorderSize=1;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if((!LoggedIn)&&(!USER_SETTINGS->US->AlwaysPlayOffline))
			 {
				 MessageBox::Show("Сначала введите данные авторизации или\nвыберите оффлайн режим в окне настроек.");
				 registerpanel->Visible=false;
				 restorepasspanel->Visible=false;
				 changepasspanel->Visible=false;
				 panel4->Visible=false;
				 panel1->Visible=false;			 
				 panel3->Visible=false;
				 panel2->Visible=true;
				 return;
			 }
			 button1->Enabled=false;
			 button2->Enabled=false;
			 button3->Enabled=false;
			 button4->Enabled=false;
			 button5->Enabled=false;
			 button6->Enabled=false;
			 registerpanel->Visible=false;
			 restorepasspanel->Visible=false;
			 changepasspanel->Visible=false;
			 panel4->Visible=false;
			 panel2->Visible=false;
			 panel3->Visible=false;
			 panel1->Visible=true;
			 if (!USER_SETTINGS->US->AlwaysPlayOffline)
				UpdaterThread->Start();
			 else
				{StartMinecraft("",USER_SETTINGS->US->Memory);this->Close();}
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 registerpanel->Visible=false;
			 restorepasspanel->Visible=false;
			 changepasspanel->Visible=false;
			 panel4->Visible=false;
			 panel2->Visible=false;
			 panel3->Visible=false;
			 panel1->Visible=true;
			 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 registerpanel->Visible=false;
			 restorepasspanel->Visible=false;
			 changepasspanel->Visible=false;
			 panel4->Visible=false;
			 panel1->Visible=false;			 
			 panel3->Visible=false;
			 panel2->Visible=true;
			 
		 }
private: System::Void backbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 registerpanel->Visible=false;
			 restorepasspanel->Visible=false;
			 changepasspanel->Visible=false;
			 panel4->Visible=false;
			 panel1->Visible=false;			 
			 panel3->Visible=false;
			 panel2->Visible=true;
			 
		 }
private: System::Void registerbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel4->Visible=false;
			 panel1->Visible=false;			 
			 panel3->Visible=false;
			 panel2->Visible=false;
			 registerpanel->Visible=true;
			 restorepasspanel->Visible=false;
			 changepasspanel->Visible=false;
			 
		 }
private: System::Void restorepassbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel4->Visible=false;
			 panel1->Visible=false;			 
			 panel3->Visible=false;
			 panel2->Visible=false;
			 registerpanel->Visible=false;
			 restorepasspanel->Visible=true;
			 changepasspanel->Visible=false;
			 
		 }
private: System::Void changepassbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel4->Visible=false;
			 panel1->Visible=false;			 
			 panel3->Visible=false;
			 panel2->Visible=false;
			 registerpanel->Visible=false;
			 restorepasspanel->Visible=false;
			 changepasspanel->Visible=true;
			 
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			registerpanel->Visible=false;
			restorepasspanel->Visible=false;
			changepasspanel->Visible=false;
			panel4->Visible=false;
			panel1->Visible=false;
			panel2->Visible=false;
			panel3->Visible=true;
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(!LoggedIn)
			 {
				 MessageBox::Show("Сначала введите данные авторизации!");
				 registerpanel->Visible=false;
				 restorepasspanel->Visible=false;
				 changepasspanel->Visible=false;
				 panel4->Visible=false;
				 panel1->Visible=false;			 
				 panel3->Visible=false;
				 panel2->Visible=true;
				 return;
			 }
			 
			 try{				 
				 pictureBox5->Image=ShowSkin(gcnew Bitmap(gcnew IO::MemoryStream(W->DownloadData(s->UpdURL+W->DownloadString(s->UpdURL+s->MainFileName+"?action=getskinpath")+USER_SETTINGS->US->Login+".png"))));
				 pictureBox5->Refresh();
			 }
			 catch(WebException^ WE){MessageBox::Show("Ошибка интернет-соединения!");}
			 catch(Exception ^E){MessageBox::Show("У Вас нет скина");}
			 registerpanel->Visible=false;
			 restorepasspanel->Visible=false;
			 changepasspanel->Visible=false;
			 panel3->Visible=false;
			 panel1->Visible=false;
			 panel2->Visible=false;
			 panel4->Visible=true;
			 
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Diagnostics::Process::Start(s->SiteURL);
		 }
private: System::Void textBox1_login_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (settings_read) USER_SETTINGS->Read((int)trackBar1->Value, comboBox1->SelectedIndex,checkBox1->Checked,checkBox1_save_pass->Checked,textBox1_login->Text,textBox2_pass->Text);
		 }
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void registerpanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void changepasspanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void restorepasspanel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void textBox2_pass_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 if (settings_read) USER_SETTINGS->Read((int)trackBar1->Value, comboBox1->SelectedIndex,checkBox1->Checked,checkBox1_save_pass->Checked,textBox1_login->Text,textBox2_pass->Text);
		 }
private: System::Void checkBox1_save_pass_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (settings_read) USER_SETTINGS->Read((int)trackBar1->Value, comboBox1->SelectedIndex,checkBox1->Checked,checkBox1_save_pass->Checked,textBox1_login->Text,textBox2_pass->Text);
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (settings_read) USER_SETTINGS->Read((int)trackBar1->Value, comboBox1->SelectedIndex,checkBox1->Checked,checkBox1_save_pass->Checked,textBox1_login->Text,textBox2_pass->Text);
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (settings_read) USER_SETTINGS->Read((int)trackBar1->Value, comboBox1->SelectedIndex,checkBox1->Checked,checkBox1_save_pass->Checked,textBox1_login->Text,textBox2_pass->Text);
		 }
private: System::Void trackBar1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 label11->Text=Convert::ToString(trackBar1->Value)+" МБ";
			 if (settings_read) USER_SETTINGS->Read((int)trackBar1->Value, comboBox1->SelectedIndex,checkBox1->Checked,checkBox1_save_pass->Checked,textBox1_login->Text,textBox2_pass->Text);
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 Login(false);
		 }
private: System::Void regbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 Register(false);
		 }
private: System::Void cpbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 ChangePass(false);
		 }
private: System::Void rpbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 RestorePass(false);
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 
				 IO::FileStream ^FS=gcnew IO::FileStream(openFileDialog1->FileName,IO::FileMode::Open,IO::FileAccess::Read);
				 skin_to_load=gcnew Bitmap(FS);
				 if(!((skin_to_load->Width==64)&&(skin_to_load->Height==32)))
				 {
					 MessageBox::Show("Скин должен быть размером 64x32 pix");
					 FS->Close();
					 return;
				 }
				 pictureBox4->Image=ShowSkin(skin_to_load);
				 pictureBox4->Refresh();
				
				 SkinData=gcnew array<Byte>((int)FS->Length);
				 /*
				 for (int i=0;i<FS->Length;i++)
				 {
					 SkinData[i]=(Byte)FS->ReadByte();
				 }
				 */
				 FS->Seek(0,IO::SeekOrigin::Begin);
				 FS->Read(SkinData,0,(int)SkinData->Length);
				 FS->Close();
				 button7->Enabled=true;
			 }
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Diagnostics::Process::Start(Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData)+"\\"+s->FolderName);
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

			 String ^base64_data=Convert::ToBase64String(SkinData,0,SkinData->Length);
			 System::Security::Cryptography::MD5CryptoServiceProvider md5;
			 System::Text::Encoding ^enc=System::Text::Encoding::Default;
			 array<unsigned char>^ retVal = md5.ComputeHash(enc->GetBytes(textBox2_pass->Text));
			 System::Text::StringBuilder^ sBuilder = gcnew System::Text::StringBuilder();
			 for (int i = 0; i < retVal->Length; i++)	{
				 sBuilder->Append(retVal[i].ToString("x2"));
			 }
			 retVal = md5.ComputeHash(enc->GetBytes(sBuilder->ToString()->ToLower()+s->SecretKey+Convert::ToString(base64_data->Length)+"skin"));
			 sBuilder = gcnew System::Text::StringBuilder();
			 for (int i = 0; i < retVal->Length; i++)	{
				 sBuilder->Append(retVal[i].ToString("x2"));
			 }
			 String^md5_pass=sBuilder->ToString()->ToLower();
			 String ^result;
			 try 
			 {result=W->DownloadString(s->UpdURL+s->MainFileName+"?action=setskin&login="+USER_SETTINGS->US->Login+"&token="+md5_pass+"&img_data="+base64_data);}
			 catch(Exception ^E){MessageBox::Show("Ошибка загрузки!"); return;}
			 if (result=="OK")
			 {
				 try{
				 pictureBox5->Image=ShowSkin(gcnew Bitmap(gcnew IO::MemoryStream(W->DownloadData(s->UpdURL+W->DownloadString(s->UpdURL+s->MainFileName+"?action=getskinpath")+USER_SETTINGS->US->Login+".png"))));
				 pictureBox5->Refresh();
				 button7->Enabled=false;
				 pictureBox4->Image = gcnew Bitmap(1,1);
				 MessageBox::Show("Успешно!");
				 
				 return;}
				 catch(Exception ^E){}
			 }
			 else 
				 MessageBox::Show("Ошибка загрузки!\nОтвет сервера: "+result);
			 //IO::File::WriteAllText("D:\\a.txt",result);
		 }
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (settings_read) {USER_SETTINGS->US->ServerID=comboBox2->SelectedIndex;
			 comboBox1->SelectedIndex=USER_SETTINGS->US->FullClient=1;
			 button9->Text="Войти";
			 textBox1_login->Enabled=true;
			 textBox2_pass->Enabled=true;
			 USER_SETTINGS->US->AutoLogin=false;
			 LoggedIn=false;
			 s->LoadSettingsFromServer(USER_SETTINGS->US->ServerID);
			 webBrowser1->Navigate(s->Servers[USER_SETTINGS->US->ServerID]->NewsURL);
			 webBrowser1->Refresh(WebBrowserRefreshOption::Completely);
			 UpdateLauncher();
			 }
			 
		 }
private: System::Void checkBox1_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 USER_SETTINGS->US->AlwaysPlayOffline=checkBox1->Checked;
		 }
};
}

