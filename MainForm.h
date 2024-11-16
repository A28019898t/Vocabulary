#pragma once
#include "ReviewForm.h"
#include "PracticeForm.h"
#include "ListeningForm.h"

namespace Vocabulary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Btn_Review;
	protected:
	private: System::Windows::Forms::Button^ Btn_Practice;
	private: System::Windows::Forms::Button^ Btn_Listening;
	private: System::Windows::Forms::Button^ Btn_Writing;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->Btn_Review = (gcnew System::Windows::Forms::Button());
			this->Btn_Practice = (gcnew System::Windows::Forms::Button());
			this->Btn_Listening = (gcnew System::Windows::Forms::Button());
			this->Btn_Writing = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Btn_Review
			// 
			this->Btn_Review->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Btn_Review->FlatAppearance->BorderSize = 0;
			this->Btn_Review->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_Review->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_Review->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Review->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Review->ForeColor = System::Drawing::Color::White;
			this->Btn_Review->Location = System::Drawing::Point(27, 40);
			this->Btn_Review->Name = L"Btn_Review";
			this->Btn_Review->Size = System::Drawing::Size(149, 46);
			this->Btn_Review->TabIndex = 0;
			this->Btn_Review->Text = L"Review";
			this->Btn_Review->UseVisualStyleBackColor = false;
			this->Btn_Review->Click += gcnew System::EventHandler(this, &MainForm::Btn_Review_Click);
			// 
			// Btn_Practice
			// 
			this->Btn_Practice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Btn_Practice->FlatAppearance->BorderSize = 0;
			this->Btn_Practice->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_Practice->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_Practice->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Practice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Practice->ForeColor = System::Drawing::Color::White;
			this->Btn_Practice->Location = System::Drawing::Point(219, 40);
			this->Btn_Practice->Name = L"Btn_Practice";
			this->Btn_Practice->Size = System::Drawing::Size(149, 46);
			this->Btn_Practice->TabIndex = 1;
			this->Btn_Practice->Text = L"Practice";
			this->Btn_Practice->UseVisualStyleBackColor = false;
			this->Btn_Practice->Click += gcnew System::EventHandler(this, &MainForm::Btn_Practice_Click);
			// 
			// Btn_Listening
			// 
			this->Btn_Listening->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Btn_Listening->FlatAppearance->BorderSize = 0;
			this->Btn_Listening->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_Listening->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_Listening->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Listening->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Listening->ForeColor = System::Drawing::Color::White;
			this->Btn_Listening->Location = System::Drawing::Point(413, 40);
			this->Btn_Listening->Name = L"Btn_Listening";
			this->Btn_Listening->Size = System::Drawing::Size(149, 46);
			this->Btn_Listening->TabIndex = 2;
			this->Btn_Listening->Text = L"Listening";
			this->Btn_Listening->UseVisualStyleBackColor = false;
			this->Btn_Listening->Click += gcnew System::EventHandler(this, &MainForm::Btn_Listening_Click);
			// 
			// Btn_Writing
			// 
			this->Btn_Writing->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Btn_Writing->FlatAppearance->BorderSize = 0;
			this->Btn_Writing->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Btn_Writing->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Btn_Writing->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Writing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Writing->ForeColor = System::Drawing::Color::White;
			this->Btn_Writing->Location = System::Drawing::Point(601, 40);
			this->Btn_Writing->Name = L"Btn_Writing";
			this->Btn_Writing->Size = System::Drawing::Size(149, 46);
			this->Btn_Writing->TabIndex = 3;
			this->Btn_Writing->Text = L"Writing";
			this->Btn_Writing->UseVisualStyleBackColor = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(783, 134);
			this->Controls->Add(this->Btn_Writing);
			this->Controls->Add(this->Btn_Listening);
			this->Controls->Add(this->Btn_Practice);
			this->Controls->Add(this->Btn_Review);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"Main";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Btn_Review_Click(System::Object^ sender, System::EventArgs^ e) {
		ReviewForm form1;
		form1.ShowDialog();
	}
	private: System::Void Btn_Practice_Click(System::Object^ sender, System::EventArgs^ e) {
		PracticeForm form2;
		form2.ShowDialog();
	}
	private: System::Void Btn_Listening_Click(System::Object^ sender, System::EventArgs^ e) {
		ListeningForm form3;
		form3.ShowDialog();
	}
	};
};
