#pragma once

namespace HuskyNeo2Tool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// DBConfigureForm 摘要
	/// </summary>
	public ref class DBConfigureForm : public System::Windows::Forms::Form
	{
	public:
		DBConfigureForm(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~DBConfigureForm()
		{
			if (components)
			{
				delete components;
			}
		}

	public: System::Windows::Forms::CheckBox^  checkBoxDBUpdateEnable;
	public: System::Windows::Forms::CheckBox^  checkBoxDBDebugMsgEnable;
	public: System::Windows::Forms::TextBox^  textBoxDBUpdateFrequency;
	public: System::Windows::Forms::TextBox^  textBoxDBName;
	public: System::Windows::Forms::TextBox^  textBoxUserName;
	public: System::Windows::Forms::TextBox^  textBoxPassword;
	public: System::Windows::Forms::TextBox^  textBoxHostIP;
	public: System::Windows::Forms::TextBox^  textBoxtTemperatureTableName;
	public: System::Windows::Forms::TextBox^  textBoxAlarmTableName;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  buttonOK;
	private: System::Windows::Forms::Button^  buttonCancel;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	


	private: System::Windows::Forms::Label^  label8;
	

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->checkBoxDBDebugMsgEnable = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxDBUpdateFrequency = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->checkBoxDBUpdateEnable = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxUserName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxDBName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtTemperatureTableName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAlarmTableName = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxHostIP = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// checkBoxDBDebugMsgEnable
			// 
			this->checkBoxDBDebugMsgEnable->AutoSize = true;
			this->checkBoxDBDebugMsgEnable->Location = System::Drawing::Point(27, 195);
			this->checkBoxDBDebugMsgEnable->Name = L"checkBoxDBDebugMsgEnable";
			this->checkBoxDBDebugMsgEnable->Size = System::Drawing::Size(180, 16);
			this->checkBoxDBDebugMsgEnable->TabIndex = 0;
			this->checkBoxDBDebugMsgEnable->Text = L"打开数据库连接通讯失败提示";
			this->checkBoxDBDebugMsgEnable->UseVisualStyleBackColor = true;
			// 
			// textBoxDBUpdateFrequency
			// 
			this->textBoxDBUpdateFrequency->Location = System::Drawing::Point(126, 215);
			this->textBoxDBUpdateFrequency->Name = L"textBoxDBUpdateFrequency";
			this->textBoxDBUpdateFrequency->Size = System::Drawing::Size(28, 21);
			this->textBoxDBUpdateFrequency->TabIndex = 1;
			this->textBoxDBUpdateFrequency->Text = L"15";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 219);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 12);
			this->label1->TabIndex = 2;
			this->label1->Text = L"数据库更新频率：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(157, 219);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 12);
			this->label2->TabIndex = 3;
			this->label2->Text = L"S/次";
			// 
			// buttonOK
			// 
			this->buttonOK->Location = System::Drawing::Point(274, 241);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(75, 23);
			this->buttonOK->TabIndex = 4;
			this->buttonOK->Text = L"确定";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &DBConfigureForm::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(194, 241);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(75, 23);
			this->buttonCancel->TabIndex = 5;
			this->buttonCancel->Text = L"取消";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &DBConfigureForm::buttonCancel_Click);
			// 
			// checkBoxDBUpdateEnable
			// 
			this->checkBoxDBUpdateEnable->AutoSize = true;
			this->checkBoxDBUpdateEnable->Location = System::Drawing::Point(27, 173);
			this->checkBoxDBUpdateEnable->Name = L"checkBoxDBUpdateEnable";
			this->checkBoxDBUpdateEnable->Size = System::Drawing::Size(132, 16);
			this->checkBoxDBUpdateEnable->TabIndex = 6;
			this->checkBoxDBUpdateEnable->Text = L"打开数据库上传功能";
			this->checkBoxDBUpdateEnable->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 12);
			this->label3->TabIndex = 7;
			this->label3->Text = L"用户名:";
			// 
			// textBoxUserName
			// 
			this->textBoxUserName->Location = System::Drawing::Point(85, 36);
			this->textBoxUserName->Name = L"textBoxUserName";
			this->textBoxUserName->Size = System::Drawing::Size(264, 21);
			this->textBoxUserName->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 69);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 12);
			this->label4->TabIndex = 9;
			this->label4->Text = L"密码:";
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Location = System::Drawing::Point(85, 63);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(264, 21);
			this->textBoxPassword->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 12);
			this->label5->TabIndex = 11;
			this->label5->Text = L"数据库名:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 122);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 12);
			this->label6->TabIndex = 12;
			this->label6->Text = L"温度表名:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(25, 149);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 12);
			this->label7->TabIndex = 13;
			this->label7->Text = L"警报表名:";
			// 
			// textBoxDBName
			// 
			this->textBoxDBName->Location = System::Drawing::Point(85, 92);
			this->textBoxDBName->Name = L"textBoxDBName";
			this->textBoxDBName->Size = System::Drawing::Size(264, 21);
			this->textBoxDBName->TabIndex = 14;
			// 
			// textBoxtTemperatureTableName
			// 
			this->textBoxtTemperatureTableName->Location = System::Drawing::Point(85, 119);
			this->textBoxtTemperatureTableName->Name = L"textBoxtTemperatureTableName";
			this->textBoxtTemperatureTableName->Size = System::Drawing::Size(264, 21);
			this->textBoxtTemperatureTableName->TabIndex = 15;
			// 
			// textBoxAlarmTableName
			// 
			this->textBoxAlarmTableName->Location = System::Drawing::Point(85, 146);
			this->textBoxAlarmTableName->Name = L"textBoxAlarmTableName";
			this->textBoxAlarmTableName->Size = System::Drawing::Size(264, 21);
			this->textBoxAlarmTableName->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(26, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 12);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Host IP:";
			// 
			// textBoxHostIP
			// 
			this->textBoxHostIP->Location = System::Drawing::Point(85, 9);
			this->textBoxHostIP->Name = L"textBoxHostIP";
			this->textBoxHostIP->Size = System::Drawing::Size(264, 21);
			this->textBoxHostIP->TabIndex = 18;
			// 
			// DBConfigureForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(381, 276);
			this->Controls->Add(this->textBoxHostIP);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBoxAlarmTableName);
			this->Controls->Add(this->textBoxtTemperatureTableName);
			this->Controls->Add(this->textBoxDBName);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxUserName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBoxDBUpdateEnable);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxDBUpdateFrequency);
			this->Controls->Add(this->checkBoxDBDebugMsgEnable);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->Name = L"DBConfigureForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DBConfigureForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void buttonOK_Click(System::Object^  sender, System::EventArgs^  e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
private: System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		
	}
};
}
