#pragma once

#include "DrawClass.h"

namespace Losowanie {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  losujButton;
	private: System::Windows::Forms::NumericUpDown^  playersCount;
	private: System::Windows::Forms::Label^  labelOd;

	protected: 





	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		DrawClass drawPlayer;



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  playerListBox;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::NumericUpDown^  minPlayersCount;
	private: System::Windows::Forms::Label^  labelDo;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;











			 /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->losujButton = (gcnew System::Windows::Forms::Button());
			this->playersCount = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelOd = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->playerListBox = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->minPlayersCount = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelDo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->playersCount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->minPlayersCount))->BeginInit();
			this->SuspendLayout();
			// 
			// losujButton
			// 
			this->losujButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->losujButton->Location = System::Drawing::Point(12, 72);
			this->losujButton->Name = L"losujButton";
			this->losujButton->Size = System::Drawing::Size(143, 30);
			this->losujButton->TabIndex = 0;
			this->losujButton->Text = L"Losuj";
			this->losujButton->UseVisualStyleBackColor = true;
			this->losujButton->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// playersCount
			// 
			this->playersCount->Location = System::Drawing::Point(135, 46);
			this->playersCount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {200, 0, 0, 0});
			this->playersCount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {3, 0, 0, 0});
			this->playersCount->Name = L"playersCount";
			this->playersCount->Size = System::Drawing::Size(60, 20);
			this->playersCount->TabIndex = 1;
			this->playersCount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {50, 0, 0, 0});
			this->playersCount->ValueChanged += gcnew System::EventHandler(this, &Form1::playersCound_ValueChanged);
			// 
			// labelOd
			// 
			this->labelOd->AutoSize = true;
			this->labelOd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->labelOd->Location = System::Drawing::Point(9, 50);
			this->labelOd->Name = L"labelOd";
			this->labelOd->Size = System::Drawing::Size(24, 16);
			this->labelOd->TabIndex = 2;
			this->labelOd->Text = L"od";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(12, 175);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 30);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Zakoñcz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// playerListBox
			// 
			this->playerListBox->Location = System::Drawing::Point(210, 30);
			this->playerListBox->Name = L"playerListBox";
			this->playerListBox->ReadOnly = true;
			this->playerListBox->Size = System::Drawing::Size(92, 342);
			this->playerListBox->TabIndex = 9;
			this->playerListBox->Text = L"";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(12, 139);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 30);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// minPlayersCount
			// 
			this->minPlayersCount->Location = System::Drawing::Point(39, 46);
			this->minPlayersCount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {199, 0, 0, 0});
			this->minPlayersCount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->minPlayersCount->Name = L"minPlayersCount";
			this->minPlayersCount->Size = System::Drawing::Size(60, 20);
			this->minPlayersCount->TabIndex = 11;
			this->minPlayersCount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->minPlayersCount->ValueChanged += gcnew System::EventHandler(this, &Form1::minPlayersCount_ValueChanged);
			// 
			// labelDo
			// 
			this->labelDo->AutoSize = true;
			this->labelDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->labelDo->Location = System::Drawing::Point(105, 50);
			this->labelDo->Name = L"labelDo";
			this->labelDo->Size = System::Drawing::Size(24, 16);
			this->labelDo->TabIndex = 12;
			this->labelDo->Text = L"do";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 16);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Losuj zawodników z zakresu";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(210, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Lista zawodników";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(318, 385);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelDo);
			this->Controls->Add(this->minPlayersCount);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->playerListBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelOd);
			this->Controls->Add(this->playersCount);
			this->Controls->Add(this->losujButton);
			this->Name = L"Form1";
			this->Text = L"Losuj zawodników";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->playersCount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->minPlayersCount))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
#define TEST_RUNx
#ifdef TEST_RUN
			for(int i = Decimal::ToInt32(this->minPlayersCount->Value); i <= Decimal::ToInt32(this->playersCount->Value); i++)
			{
#endif /*TEST_RUN*/
				this->playersCount->Enabled = false;
				this->minPlayersCount->Enabled = false;
				MessageBoxButtons buttons = MessageBoxButtons::YesNo;
				String^ message;
				String^ caption = "Wylosowano zawodnika";
				int playerA;
				String^ labelText;
				System::Windows::Forms::DialogResult result;
#ifndef TEST_RUN				
				// losuj
				do
				{
#endif
					playerA = drawPlayer.drawPlayer1();
					message = "Wylosowano zawodnika nr " + playerA.ToString() + ". Zaakceptowaæ ? ";
#ifndef TEST_RUN
					result = MessageBox::Show( this, message, caption, buttons );
				} while(result != System::Windows::Forms::DialogResult::Yes);
#endif /*TEST_RUN*/
				drawPlayer.addPlayers(PLAYER_A_TAB, playerA);
				labelText = playerA.ToString();
			
				this->playerListBox->AppendText(playerA.ToString() + "\n");
				this->playerListBox->SelectionStart = this->playerListBox->Text->Length;
				this->playerListBox->ScrollToCaret();
				
				//check if still possible to draw
				if(! drawPlayer.isPossibleToDraw())
				{
					this->losujButton->Enabled = false;
				}
#ifdef TEST_RUN
			}
#endif /*TEST_RUN*/
			 }

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 drawPlayer.setPlayersMaxNumber(Decimal::ToInt32(this->playersCount->Value));
				 drawPlayer.setPlayersMinNumber(Decimal::ToInt32(this->minPlayersCount->Value));
				 //this->playerListBox->AppendText("Zawodnik \n");

			 }
private: System::Void playersCound_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 int result = drawPlayer.setPlayersMaxNumber(Decimal::ToInt32(this->playersCount->Value));
			 if(result)
			 {
				 this->playersCount->Value = result;
			 }
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void playerListView_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			//Reset
			drawPlayer.clearDrawMemory();
			this->playersCount->Enabled = true;
			this->minPlayersCount->Enabled = true;
			this->losujButton->Enabled = true;

			this->playerListBox->Clear();
			//this->playerListBox->AppendText("Zawodnik \n");
		 }
private: System::Void minPlayersCount_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			int result = drawPlayer.setPlayersMinNumber(Decimal::ToInt32(this->minPlayersCount->Value));
			if(result)
			{
				this->minPlayersCount->Value = result;
			}
		}
};
}

