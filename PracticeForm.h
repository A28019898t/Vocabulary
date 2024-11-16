#pragma once
#include <ctime>
#include <stdlib.h>
#include <iostream>
#include <chrono>
#include <thread>
#include <Windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

namespace Vocabulary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace std::chrono_literals;



	/// <summary>
	/// Summary for PracticeForm
	/// </summary>
	public ref class PracticeForm : public System::Windows::Forms::Form
	{
	public:
		PracticeForm(void)
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
		~PracticeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox_Question;
	protected:
	private: System::Windows::Forms::Label^ label_Question;
	private: System::Windows::Forms::Button^ button_Ans1;
	private: System::Windows::Forms::Button^ button_Ans2;
	private: System::Windows::Forms::Button^ button_Ans3;
	private: System::Windows::Forms::Button^ button_Ans4;
	private: System::Windows::Forms::Button^ button_playSound;
	private: System::Windows::Forms::Button^ button_next;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PracticeForm::typeid));
			this->pictureBox_Question = (gcnew System::Windows::Forms::PictureBox());
			this->label_Question = (gcnew System::Windows::Forms::Label());
			this->button_Ans1 = (gcnew System::Windows::Forms::Button());
			this->button_Ans2 = (gcnew System::Windows::Forms::Button());
			this->button_Ans3 = (gcnew System::Windows::Forms::Button());
			this->button_Ans4 = (gcnew System::Windows::Forms::Button());
			this->button_playSound = (gcnew System::Windows::Forms::Button());
			this->button_next = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Question))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox_Question
			// 
			this->pictureBox_Question->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_Question.Image")));
			this->pictureBox_Question->Location = System::Drawing::Point(119, 12);
			this->pictureBox_Question->Name = L"pictureBox_Question";
			this->pictureBox_Question->Size = System::Drawing::Size(286, 185);
			this->pictureBox_Question->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_Question->TabIndex = 0;
			this->pictureBox_Question->TabStop = false;
			// 
			// label_Question
			// 
			this->label_Question->AutoSize = true;
			this->label_Question->BackColor = System::Drawing::Color::Transparent;
			this->label_Question->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Question->ForeColor = System::Drawing::Color::White;
			this->label_Question->Location = System::Drawing::Point(174, 219);
			this->label_Question->Name = L"label_Question";
			this->label_Question->Size = System::Drawing::Size(190, 29);
			this->label_Question->TabIndex = 1;
			this->label_Question->Text = L"label_Question";
			this->label_Question->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_Ans1
			// 
			this->button_Ans1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_Ans1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_Ans1->FlatAppearance->BorderSize = 0;
			this->button_Ans1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button_Ans1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button_Ans1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Ans1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Ans1->ForeColor = System::Drawing::Color::White;
			this->button_Ans1->Location = System::Drawing::Point(13, 270);
			this->button_Ans1->Name = L"button_Ans1";
			this->button_Ans1->Size = System::Drawing::Size(241, 137);
			this->button_Ans1->TabIndex = 2;
			this->button_Ans1->Text = L"button_Ans1";
			this->button_Ans1->UseVisualStyleBackColor = false;
			this->button_Ans1->Click += gcnew System::EventHandler(this, &PracticeForm::button_Ans1_Click);
			// 
			// button_Ans2
			// 
			this->button_Ans2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_Ans2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_Ans2->FlatAppearance->BorderSize = 0;
			this->button_Ans2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button_Ans2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button_Ans2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Ans2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Ans2->ForeColor = System::Drawing::Color::White;
			this->button_Ans2->Location = System::Drawing::Point(260, 270);
			this->button_Ans2->Name = L"button_Ans2";
			this->button_Ans2->Size = System::Drawing::Size(241, 137);
			this->button_Ans2->TabIndex = 3;
			this->button_Ans2->Text = L"button_Ans2";
			this->button_Ans2->UseVisualStyleBackColor = false;
			this->button_Ans2->Click += gcnew System::EventHandler(this, &PracticeForm::button_Ans2_Click);
			// 
			// button_Ans3
			// 
			this->button_Ans3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_Ans3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_Ans3->FlatAppearance->BorderSize = 0;
			this->button_Ans3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button_Ans3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button_Ans3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Ans3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Ans3->ForeColor = System::Drawing::Color::White;
			this->button_Ans3->Location = System::Drawing::Point(13, 413);
			this->button_Ans3->Name = L"button_Ans3";
			this->button_Ans3->Size = System::Drawing::Size(241, 137);
			this->button_Ans3->TabIndex = 4;
			this->button_Ans3->Text = L"button_Ans3";
			this->button_Ans3->UseVisualStyleBackColor = false;
			this->button_Ans3->Click += gcnew System::EventHandler(this, &PracticeForm::button_Ans3_Click);
			// 
			// button_Ans4
			// 
			this->button_Ans4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_Ans4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_Ans4->FlatAppearance->BorderSize = 0;
			this->button_Ans4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button_Ans4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button_Ans4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Ans4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Ans4->ForeColor = System::Drawing::Color::White;
			this->button_Ans4->Location = System::Drawing::Point(260, 413);
			this->button_Ans4->Name = L"button_Ans4";
			this->button_Ans4->Size = System::Drawing::Size(241, 137);
			this->button_Ans4->TabIndex = 5;
			this->button_Ans4->Text = L"button_Ans4";
			this->button_Ans4->UseVisualStyleBackColor = false;
			this->button_Ans4->Click += gcnew System::EventHandler(this, &PracticeForm::button_Ans4_Click);
			// 
			// button_playSound
			// 
			this->button_playSound->BackColor = System::Drawing::Color::DarkCyan;
			this->button_playSound->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_playSound->FlatAppearance->BorderSize = 0;
			this->button_playSound->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Turquoise;
			this->button_playSound->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Turquoise;
			this->button_playSound->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_playSound->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_playSound->ForeColor = System::Drawing::Color::White;
			this->button_playSound->Location = System::Drawing::Point(69, 571);
			this->button_playSound->Name = L"button_playSound";
			this->button_playSound->Size = System::Drawing::Size(130, 52);
			this->button_playSound->TabIndex = 6;
			this->button_playSound->TabStop = false;
			this->button_playSound->Text = L"PLAY";
			this->button_playSound->UseVisualStyleBackColor = false;
			this->button_playSound->Click += gcnew System::EventHandler(this, &PracticeForm::button_playSound_Click);
			// 
			// button_next
			// 
			this->button_next->BackColor = System::Drawing::Color::MediumBlue;
			this->button_next->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_next->FlatAppearance->BorderSize = 0;
			this->button_next->FlatAppearance->MouseDownBackColor = System::Drawing::Color::RoyalBlue;
			this->button_next->FlatAppearance->MouseOverBackColor = System::Drawing::Color::RoyalBlue;
			this->button_next->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_next->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_next->ForeColor = System::Drawing::Color::White;
			this->button_next->Location = System::Drawing::Point(316, 571);
			this->button_next->Name = L"button_next";
			this->button_next->Size = System::Drawing::Size(130, 52);
			this->button_next->TabIndex = 7;
			this->button_next->Text = L"NEXT";
			this->button_next->UseVisualStyleBackColor = false;
			this->button_next->Click += gcnew System::EventHandler(this, &PracticeForm::button_next_Click);
			// 
			// PracticeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(513, 650);
			this->Controls->Add(this->button_next);
			this->Controls->Add(this->button_playSound);
			this->Controls->Add(this->button_Ans4);
			this->Controls->Add(this->button_Ans3);
			this->Controls->Add(this->button_Ans2);
			this->Controls->Add(this->button_Ans1);
			this->Controls->Add(this->label_Question);
			this->Controls->Add(this->pictureBox_Question);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"PracticeForm";
			this->Text = L"Practice";
			this->Load += gcnew System::EventHandler(this, &PracticeForm::PracticeForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_Question))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PracticeForm_Load(System::Object^ sender, System::EventArgs^ e) {
		setForm();
	}
		   // set the form
		   void setForm() {
			   try {
				   // refresh the form
				   button_Ans1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					   static_cast<System::Int32>(static_cast<System::Byte>(64)));
				   button_Ans2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					   static_cast<System::Int32>(static_cast<System::Byte>(64)));
				   button_Ans3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					   static_cast<System::Int32>(static_cast<System::Byte>(64)));
				   button_Ans4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					   static_cast<System::Int32>(static_cast<System::Byte>(64)));

				   button_Ans1->Enabled = true;
				   button_Ans2->Enabled = true;
				   button_Ans3->Enabled = true;
				   button_Ans4->Enabled = true;

				   // connect to SQL server
				   String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=IELTS;Integrated Security=True;TrustServerCertificate=True";
				   SqlConnection sqlCon(connectionString);
				   sqlCon.Open();

				   // Query the table WORDS
				   // Query the Question
				   String^ slqQueryQues = "select top 4 * from WORDS order by NEWID()";

				   // Query in database
				   SqlCommand sqlCmd(slqQueryQues, % sqlCon);
				   SqlDataReader^ dr = sqlCmd.ExecuteReader();

				   // store the value into array or list 
				   array<String^>^ dataRowWords = gcnew array<String^>(4);
				   array<String^>^ dataRowMeanings = gcnew array<String^>(4);

				   int counter = 0;
				   while (dr->Read()) {
					   String^ word = dr["Word"]->ToString();
					   String^ meaning = dr["Meaning"]->ToString();
					   dataRowWords[counter] = word;
					   dataRowMeanings[counter] = meaning;
					   counter++;
				   }

				   // close the sql data reader 
				   dr->Close();

				   // set the image for picture box: question
				   String^ image = "C:\\Users\\daoan\\Downloads\\Picture\\454841708_943674264231247_8220753208205056571_n.jpg";
				   pictureBox_Question->Load(image);

				   //set the Question and Answer
				   if (counter == 4) {
					   // == 4:: 4 element needs to set in form
					   // set data for form
					   // set data for question
					   label_Question->Text = dataRowWords[0];

					   // create a random num choice for ans
					   srand(time(NULL));
					   Random random;
					   int randomNum = random.Next(1, 5);

					   // set choice
					   switch (randomNum) {
					   case 1:
						   // set position for right answer
						   // 1 right
						   button_Ans1->Text = dataRowMeanings[0];
						   //234 wrong
						   button_Ans2->Text = dataRowMeanings[1];
						   button_Ans3->Text = dataRowMeanings[2];
						   button_Ans4->Text = dataRowMeanings[3];
						   break;
					   case 2:
						   // set position for right answer
						   // 2 right
						   button_Ans2->Text = dataRowMeanings[0];
						   // 134 wrong
						   button_Ans1->Text = dataRowMeanings[1];
						   button_Ans3->Text = dataRowMeanings[2];
						   button_Ans4->Text = dataRowMeanings[3];
						   break;
					   case 3:
						   // set position for right answer
						   // 3 right
						   button_Ans3->Text = dataRowMeanings[0];
						   // 124 wrong
						   button_Ans1->Text = dataRowMeanings[1];
						   button_Ans2->Text = dataRowMeanings[2];
						   button_Ans4->Text = dataRowMeanings[3];
						   break;
					   case 4:
						   // set position for right answer
						   // 4 right
						   button_Ans4->Text = dataRowMeanings[0];
						   // 123 wrong
						   button_Ans1->Text = dataRowMeanings[1];
						   button_Ans2->Text = dataRowMeanings[2];
						   button_Ans3->Text = dataRowMeanings[3];
						   break;
					   default:
						   MessageBox::Show("There are something wrong");
						   break;
					   }
				   }
				   else {
					   // fetch the other data, continue in the future
				   }

				   // close the connection to database
				   sqlCon.Close();
			   }
			   catch (Exception^ ex) {
				   throw ex;
			   }
		   }


		   // Check answer
		   Boolean checkAns(String^ answer, String^ question) {
			   try {
				   // check answer
				   // connect to SQL server
				   String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=IELTS;Integrated Security=True;TrustServerCertificate=True";

				   SqlConnection sqlCon(connectionString);
				   sqlCon.Open();

				   // Query the table WORDS
				   // Query the Question
				   String^ slqQueryQues = "select * from WORDS where Meaning = N\'" + answer + "\' and Word = \'" + question + "'";
				   // Query in database
				   SqlCommand sqlCmd(slqQueryQues, % sqlCon);
				   SqlDataReader^ dr = sqlCmd.ExecuteReader();

				   if (dr->Read()) {
					   return true;
				   }
				   else {
					   return false;
				   }

				   // close the sql data reader 
				   dr->Close();
				   // close the connection to database 
				   sqlCon.Close();

			   }
			   catch (Exception^ ex) {
				   throw ex;
			   }
		   };

		   // Set enable = false for all button
		   void setUneableButton() {
			   button_Ans1->Enabled = false;
			   button_Ans2->Enabled = false;
			   button_Ans3->Enabled = false;
			   button_Ans4->Enabled = false;
		   }

		   // set color back for button
		   void setBackColor(System::Windows::Forms::Button^ button, int red, int yellow, int blue) {
			   button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(red)),
				   static_cast<System::Int32>(static_cast<System::Byte>(yellow)),
				   static_cast<System::Int32>(static_cast<System::Byte>(blue)));
		   }

	private: System::Void button_Ans1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ answer = button_Ans1->Text;
		String^ question = label_Question->Text;
		Boolean check = checkAns(answer, question);

		if (check) {
			setBackColor(button_Ans1, 0, 204, 102);
		}
		else {
			setBackColor(button_Ans1, 255, 102, 102);
		}

		setUneableButton();
	}

	private: System::Void button_Ans2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ answer = button_Ans2->Text;
		String^ question = label_Question->Text;
		Boolean check = checkAns(answer, question);

		if (check) {
			setBackColor(button_Ans2, 0, 204, 102);
		}
		else {
			setBackColor(button_Ans2, 255, 102, 102);
		}

		setUneableButton();
	}

	private: System::Void button_Ans3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ answer = button_Ans3->Text;
		String^ question = label_Question->Text;
		Boolean check = checkAns(answer, question);

		if (check) {
			setBackColor(button_Ans3, 0, 204, 102);
		}
		else {
			setBackColor(button_Ans3, 255, 102, 102);
		}

		setUneableButton();
	}

	private: System::Void button_Ans4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ answer = button_Ans4->Text;
		String^ question = label_Question->Text;
		Boolean check = checkAns(answer, question);

		if (check) {
			setBackColor(button_Ans4, 0, 204, 102);
		}
		else {
			setBackColor(button_Ans4, 255, 102, 102);
		}

		setUneableButton();
	}

	private: System::Void button_next_Click(System::Object^ sender, System::EventArgs^ e) {
		setForm();
	}
	private: System::Void button_playSound_Click(System::Object^ sender, System::EventArgs^ e) {

		PlaySound(TEXT("abandoned.wav"), NULL, SND_FILENAME | SND_SYNC);

	}
	};
}
