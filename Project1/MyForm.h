#pragma once
#include <cstdlib>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::CheckBox^ checkBox12;
	private: System::Windows::Forms::CheckBox^ checkBox13;
	private: System::Windows::Forms::CheckBox^ checkBox14;
	private: System::Windows::Forms::CheckBox^ checkBox15;
	private: System::Windows::Forms::CheckBox^ checkBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(28, 44);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(425, 21);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Показать -> Минимальное число ядер в состоянии простоя";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->Location = System::Drawing::Point(13, 490);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 39);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Применить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Скрытые опции для процессора:";
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(602, 403);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(212, 39);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Открыть настройки питания";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Location = System::Drawing::Point(347, 461);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(467, 96);
			this->label2->TabIndex = 5;
			this->label2->Text = resources->GetString(L"label2.Text");
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkBox2
			// 
			this->checkBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(12, 536);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(328, 21);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"Выделить/по умолчанию /убрать все галочки";
			this->checkBox2->ThreeState = true;
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckStateChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckStateChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(28, 71);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(509, 21);
			this->checkBox3->TabIndex = 7;
			this->checkBox3->Text = L"Показать -> Переопределение приостановки ядра производительности";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(28, 98);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(431, 21);
			this->checkBox4->TabIndex = 8;
			this->checkBox4->Text = L"Показать -> Максимальное число ядер в состоянии простоя";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(28, 125);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(458, 21);
			this->checkBox5->TabIndex = 9;
			this->checkBox5->Text = L"Показать -> Порог увеличения производительности процессора";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(28, 152);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(462, 21);
			this->checkBox6->TabIndex = 10;
			this->checkBox6->Text = L"Показать -> Порог уменьшения производительности процессора";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(28, 179);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(487, 21);
			this->checkBox7->TabIndex = 11;
			this->checkBox7->Text = L"Показать -> Политика уменьшения производительности процессора";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(28, 341);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(458, 21);
			this->checkBox8->TabIndex = 17;
			this->checkBox8->Text = L"Показать -> Пороговое значение понижения состояния простоя";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(28, 314);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(461, 21);
			this->checkBox9->TabIndex = 16;
			this->checkBox9->Text = L"Показать -> Пороговое значение повышения состояния простоя";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(28, 287);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(418, 21);
			this->checkBox10->TabIndex = 15;
			this->checkBox10->Text = L"Показать -> Порог использования функции парковки ядер";
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(28, 260);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(446, 21);
			this->checkBox11->TabIndex = 14;
			this->checkBox11->Text = L"Показать -> Режим усиления производительности процессора";
			this->checkBox11->UseVisualStyleBackColor = true;
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(28, 233);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(336, 21);
			this->checkBox12->TabIndex = 13;
			this->checkBox12->Text = L"Показать -> Отключение простоя процессора";
			this->checkBox12->UseVisualStyleBackColor = true;
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Location = System::Drawing::Point(28, 206);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(483, 21);
			this->checkBox13->TabIndex = 12;
			this->checkBox13->Text = L"Показать -> Политика увеличения производительности процессора";
			this->checkBox13->UseVisualStyleBackColor = true;
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Location = System::Drawing::Point(28, 422);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(386, 21);
			this->checkBox14->TabIndex = 20;
			this->checkBox14->Text = L"Показать -> Разрешить состояния снижения питания";
			this->checkBox14->UseVisualStyleBackColor = true;
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Checked = true;
			this->checkBox15->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox15->Location = System::Drawing::Point(28, 395);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(473, 21);
			this->checkBox15->TabIndex = 19;
			this->checkBox15->Text = L"Показать -> Максимальное состояние процессора (по умолчанию)";
			this->checkBox15->UseVisualStyleBackColor = true;
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->Checked = true;
			this->checkBox16->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox16->Location = System::Drawing::Point(28, 368);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(467, 21);
			this->checkBox16->TabIndex = 18;
			this->checkBox16->Text = L"Показать -> Минимальное состояние процессора (по умолчанию)";
			this->checkBox16->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(537, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(291, 345);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 461);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(325, 17);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Кнопка заменяет все состояния после нажатия";
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button3->Location = System::Drawing::Point(171, 490);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(124, 39);
			this->button3->TabIndex = 23;
			this->button3->Text = L"По умолчанию";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(840, 584);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->checkBox14);
			this->Controls->Add(this->checkBox15);
			this->Controls->Add(this->checkBox16);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->checkBox12);
			this->Controls->Add(this->checkBox13);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"MyForm";
			this->Text = L"Скрытые опции для процессора";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked)	std::system("powercfg -attributes SUB_PROCESSOR 0cc5b647-c1df-4637-891a-dec35c318583 -ATTRIB_HIDE");
		else std::system("powercfg -attributes SUB_PROCESSOR 0cc5b647-c1df-4637-891a-dec35c318583 +ATTRIB_HIDE");
		if (checkBox3->Checked)	std::system("powercfg -attributes SUB_PROCESSOR a55612aa-f624-42c6-a443-7397d064c04f -ATTRIB_HIDE");
		else std::system("powercfg -attributes SUB_PROCESSOR a55612aa-f624-42c6-a443-7397d064c04f +ATTRIB_HIDE");
		if (checkBox4->Checked)	std::system("powercfg -attributes SUB_PROCESSOR ea062031-0e34-4ff1-9b6d-eb1059334028 -ATTRIB_HIDE");
		else std::system("powercfg -attributes SUB_PROCESSOR ea062031-0e34-4ff1-9b6d-eb1059334028 +ATTRIB_HIDE");
		if (checkBox5->Checked)	std::system("powercfg -attributes SUB_PROCESSOR 06cadf0e-64ed-448a-8927-ce7bf90eb35d -ATTRIB_HIDE");
		else std::system("powercfg -attributes SUB_PROCESSOR 06cadf0e-64ed-448a-8927-ce7bf90eb35d +ATTRIB_HIDE");
		if (checkBox6->Checked)	std::system("powercfg -attributes SUB_PROCESSOR 12a0ab44-fe28-4fa9-b3bd-4b64f44960a6 -ATTRIB_HIDE");
		else std::system("powercfg -attributes SUB_PROCESSOR 12a0ab44-fe28-4fa9-b3bd-4b64f44960a6 +ATTRIB_HIDE");
		if (checkBox7->Checked)	std::system("powercfg -attributes SUB_PROCESSOR 40fbefc7-2e9d-4d25-a185-0cfd8574bac6 -ATTRIB_HIDE");
		else std::system("powercfg -attributes SUB_PROCESSOR 40fbefc7-2e9d-4d25-a185-0cfd8574bac6 +ATTRIB_HIDE");
		if (checkBox8->Checked)	std::system("powercfg -attributes SUB_PROCESSOR 4b92d758-5a24-4851-a470-815d78aee119 -ATTRIB_HIDE");
		else std::system("powercfg -attributes SUB_PROCESSOR 4b92d758-5a24-4851-a470-815d78aee119 +ATTRIB_HIDE");
		if (checkBox9->Checked)	std::system("powercfg -attributes SUB_PROCESSOR 7b224883-b3cc-4d79-819f-8374152cbe7c -ATTRIB_HIDE");
		else std::system("powercfg -attributes SUB_PROCESSOR 7b224883-b3cc-4d79-819f-8374152cbe7c +ATTRIB_HIDE");
		if (checkBox10->Checked) std::system("powercfg -attributes SUB_PROCESSOR 943c8cb6-6f93-4227-ad87-e9a3feec08d1 -ATTRIB_HIDE");
		else std::system("powercfg -attributes SUB_PROCESSOR 943c8cb6-6f93-4227-ad87-e9a3feec08d1 +ATTRIB_HIDE");
		if (checkBox11->Checked) std::system("powercfg -attributes SUB_PROCESSOR be337238-0d82-4146-a960-4f3749d470c7 -ATTRIB_HIDE");
		else std::system("powercfg -attributes SUB_PROCESSOR be337238-0d82-4146-a960-4f3749d470c7 +ATTRIB_HIDE");
		if (checkBox12->Checked) std::system("powercfg -attributes SUB_PROCESSOR 5d76a2ca-e8c0-402f-a133-2158492d58ad -ATTRIB_HIDE");
		else std::system("powercfg -attributes SUB_PROCESSOR 5d76a2ca-e8c0-402f-a133-2158492d58ad +ATTRIB_HIDE");
		if (checkBox13->Checked) std::system("powercfg -attributes SUB_PROCESSOR 465e1f50-b610-473a-ab58-00d1077dc418 -ATTRIB_HIDE");
		else std::system("powercfg -attributes SUB_PROCESSOR 465e1f50-b610-473a-ab58-00d1077dc418 +ATTRIB_HIDE");
		if (checkBox14->Checked) std::system("powercfg -attributes SUB_PROCESSOR 3b04d4fd-1cc7-4f23-ab1c-d1337819c4bb -ATTRIB_HIDE");
		else std::system("powercfg -attributes SUB_PROCESSOR 3b04d4fd-1cc7-4f23-ab1c-d1337819c4bb +ATTRIB_HIDE");
		if (checkBox15->Checked) std::system("powercfg -attributes SUB_PROCESSOR bc5038f7-23e0-4960-96da-33abaf5935ec -ATTRIB_HIDE");
		else std::system("powercfg -attributes SUB_PROCESSOR bc5038f7-23e0-4960-96da-33abaf5935ec +ATTRIB_HIDE");
		if (checkBox16->Checked)std::system("powercfg -attributes SUB_PROCESSOR 893dee8e-2bef-41e0-89c6-b55d0929964c -ATTRIB_HIDE");
		else std::system("powercfg -attributes SUB_PROCESSOR 893dee8e-2bef-41e0-89c6-b55d0929964c +ATTRIB_HIDE");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		std::system("rundll32 shell32.dll,Control_RunDLL PowerCfg.cpl");
	}
private: System::Void checkBox2_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!checkBox2->Checked) {
		checkBox1->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
		checkBox11->Checked = false;
		checkBox12->Checked = false;
		checkBox13->Checked = false;
		checkBox14->Checked = false;
		checkBox15->Checked = false;
		checkBox16->Checked = false;
	} else if (checkBox2->CheckState.ToString() == "Indeterminate") {
		checkBox1->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
		checkBox11->Checked = false;
		checkBox12->Checked = false;
		checkBox13->Checked = false;
		checkBox14->Checked = false;
		checkBox15->Checked = true;
		checkBox16->Checked = true;
	} else {
		checkBox1->Checked = true;
		checkBox3->Checked = true;
		checkBox4->Checked = true;
		checkBox5->Checked = true;
		checkBox6->Checked = true;
		checkBox7->Checked = true;
		checkBox8->Checked = true;
		checkBox9->Checked = true;
		checkBox10->Checked = true;
		checkBox11->Checked = true;
		checkBox12->Checked = true;
		checkBox13->Checked = true;
		checkBox14->Checked = true;
		checkBox15->Checked = true;
		checkBox16->Checked = true;
	}
}
//private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
//	checkBox1->Checked = false;
//	checkBox3->Checked = false;
//	checkBox4->Checked = false;
//	checkBox5->Checked = false;
//	checkBox6->Checked = false;
//	checkBox7->Checked = false;
//	checkBox8->Checked = false;
//	checkBox9->Checked = false;
//	checkBox10->Checked = false;
//	checkBox11->Checked = false;
//	checkBox12->Checked = false;
//	checkBox13->Checked = false;
//	checkBox14->Checked = false;
//	checkBox15->Checked = true;
//	checkBox16->Checked = true;
//}
};
}
