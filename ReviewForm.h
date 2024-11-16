#pragma once
#include <vcclr.h>

namespace Vocabulary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for ReviewForm
	/// </summary>
	public ref class ReviewForm : public System::Windows::Forms::Form
	{
	public:
		ReviewForm(void)
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
		~ReviewForm()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// ReviewForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 309);
			this->Name = L"ReviewForm";
			this->Text = L"ReviewForm";
			this->Load += gcnew System::EventHandler(this, &ReviewForm::ReviewForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ReviewForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	};
}
