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

	protected: 


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  wylosowany1;
	private: System::Windows::Forms::Label^  wylosowany2;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		DrawClass drawPlayer;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  playerListBox;
	private: System::Windows::Forms::Button^  button2;










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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->wylosowany1 = (gcnew System::Windows::Forms::Label());
			this->wylosowany2 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->playerListBox = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->playersCount))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// losujButton
			// 
			this->losujButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->losujButton->Location = System::Drawing::Point(58, 65);
			this->losujButton->Name = L"losujButton";
			this->losujButton->Size = System::Drawing::Size(143, 30);
			this->losujButton->TabIndex = 0;
			this->losujButton->Text = L"Losuj";
			this->losujButton->UseVisualStyleBackColor = true;
			this->losujButton->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// playersCount
			// 
			this->playersCount->Location = System::Drawing::Point(12, 30);
			this->playersCount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {200, 0, 0, 0});
			this->playersCount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->playersCount->Name = L"playersCount";
			this->playersCount->Size = System::Drawing::Size(60, 20);
			this->playersCount->TabIndex = 1;
			this->playersCount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {50, 0, 0, 0});
			this->playersCount->ValueChanged += gcnew System::EventHandler(this, &Form1::playersCound_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(78, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"zawodników";
			// 
			// wylosowany1
			// 
			this->wylosowany1->AutoSize = true;
			this->wylosowany1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->wylosowany1->Location = System::Drawing::Point(5, 38);
			this->wylosowany1->Name = L"wylosowany1";
			this->wylosowany1->Size = System::Drawing::Size(20, 25);
			this->wylosowany1->TabIndex = 3;
			this->wylosowany1->Text = L"-";
			// 
			// wylosowany2
			// 
			this->wylosowany2->AutoSize = true;
			this->wylosowany2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->wylosowany2->Location = System::Drawing::Point(124, 38);
			this->wylosowany2->Name = L"wylosowany2";
			this->wylosowany2->Size = System::Drawing::Size(20, 25);
			this->wylosowany2->TabIndex = 4;
			this->wylosowany2->Text = L"-";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(6, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Zawodnik 1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(125, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Zawodnik 2";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->wylosowany2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->wylosowany1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->groupBox1->Location = System::Drawing::Point(12, 111);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(231, 68);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Wynik losowania";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(12, 222);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 30);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Zakoñcz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// playerListBox
			// 
			this->playerListBox->Location = System::Drawing::Point(279, 13);
			this->playerListBox->Name = L"playerListBox";
			this->playerListBox->ReadOnly = true;
			this->playerListBox->Size = System::Drawing::Size(245, 360);
			this->playerListBox->TabIndex = 9;
			this->playerListBox->Text = L"";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(12, 186);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 30);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(536, 385);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->playerListBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->playersCount);
			this->Controls->Add(this->losujButton);
			this->Name = L"Form1";
			this->Text = L"Losuj zawodników";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->playersCount))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->playersCount->Enabled = false;
				MessageBoxButtons buttons = MessageBoxButtons::YesNo;
				String^ message;
				String^ caption = "Wylosowano zawodnika";
				int playerA, playerB;
				String^ labelText;
				System::Windows::Forms::DialogResult result;
				
				this->wylosowany1->Text = "-";
				this->wylosowany2->Text = "-";
				// losuj
				do
				{
					playerA = drawPlayer.drawPlayer1();
					message = "Wylosowano zawodnika nr " + playerA.ToString() + ". Zaakceptowaæ ? ";
					result = MessageBox::Show( this, message, caption, buttons );
				} while(result != System::Windows::Forms::DialogResult::Yes);

				drawPlayer.addPlayers(PLAYER_A_TAB, playerA);
				labelText = playerA.ToString();
				this->wylosowany1->Text = labelText;
				// losuj drugiego
				do
				{
					playerB = drawPlayer.drawPlayer2();
					message = "Wylosowano zawodnika nr " + playerB.ToString() + ". Zaakceptowaæ ? ";
					result = MessageBox::Show( this, message, caption, buttons );
				} while(result != System::Windows::Forms::DialogResult::Yes);

				drawPlayer.addPlayers(PLAYER_B_TAB, playerB);
				labelText = playerB.ToString();
				this->wylosowany2->Text = labelText;
			
				this->playerListBox->AppendText(playerA.ToString() + "\t\t\t" + playerB.ToString() + "\n");
				
				//check if still possible to draw
				if(! drawPlayer.isPossibleToDraw())
				{
					this->losujButton->Enabled = false;
				}
				 
			 }

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 drawPlayer.setPlayersNumber(Decimal::ToInt32(this->playersCount->Value));
				 this->playerListBox->AppendText("Zawodnik 1 \t\t Zawodnik 2 \n");

			 }
private: System::Void playersCound_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 drawPlayer.setPlayersNumber(Decimal::ToInt32(this->playersCount->Value));
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
			this->losujButton->Enabled = true;

			this->playerListBox->Clear();
			this->playerListBox->AppendText("Zawodnik 1 \t\t Zawodnik 2 \n");
			this->wylosowany1->Text = "-";
			this->wylosowany2->Text = "-";
		 }
};
}

