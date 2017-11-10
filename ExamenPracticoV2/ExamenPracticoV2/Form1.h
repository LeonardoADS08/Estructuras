#pragma once
#include "INTERFAZ.h"
#include "Aplicacion.h"
namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	INTERFAZ<int> IO,IO2;
	Aplicacion<int>APP, APP2;
	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  TtamanoA;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::DataGridView^  Grid1;
	private: System::Windows::Forms::DataGridView^  Grid2;
	private: System::Windows::Forms::DataGridView^  Grid3;
	private: System::Windows::Forms::TextBox^  Tentrada;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TtamanoA = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Grid1 = (gcnew System::Windows::Forms::DataGridView());
			this->Grid2 = (gcnew System::Windows::Forms::DataGridView());
			this->Grid3 = (gcnew System::Windows::Forms::DataGridView());
			this->Tentrada = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid3))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// TtamanoA
			// 
			this->TtamanoA->Location = System::Drawing::Point(30, 61);
			this->TtamanoA->Name = L"TtamanoA";
			this->TtamanoA->Size = System::Drawing::Size(75, 23);
			this->TtamanoA->TabIndex = 0;
			this->TtamanoA->Text = L"tamano A";
			this->TtamanoA->UseVisualStyleBackColor = true;
			this->TtamanoA->Click += gcnew System::EventHandler(this, &Form1::TtamanoA_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 19);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Guardar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(6, 48);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Mostrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(6, 19);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Guardar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Grid1
			// 
			this->Grid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grid1->Location = System::Drawing::Point(155, 12);
			this->Grid1->Name = L"Grid1";
			this->Grid1->Size = System::Drawing::Size(536, 72);
			this->Grid1->TabIndex = 4;
			// 
			// Grid2
			// 
			this->Grid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grid2->Location = System::Drawing::Point(155, 90);
			this->Grid2->Name = L"Grid2";
			this->Grid2->Size = System::Drawing::Size(536, 72);
			this->Grid2->TabIndex = 5;
			// 
			// Grid3
			// 
			this->Grid3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grid3->Location = System::Drawing::Point(155, 172);
			this->Grid3->Name = L"Grid3";
			this->Grid3->Size = System::Drawing::Size(536, 72);
			this->Grid3->TabIndex = 6;
			// 
			// Tentrada
			// 
			this->Tentrada->Location = System::Drawing::Point(30, 26);
			this->Tentrada->Name = L"Tentrada";
			this->Tentrada->Size = System::Drawing::Size(100, 20);
			this->Tentrada->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Mostrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 19);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Guardar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(6, 48);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Mostrar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(30, 90);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(89, 79);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Lista Circ ";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Location = System::Drawing::Point(30, 175);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(89, 80);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Lista Cric Dim";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Location = System::Drawing::Point(30, 261);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(89, 84);
			this->groupBox3->TabIndex = 13;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Lista Norm Est";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button7);
			this->groupBox4->Controls->Add(this->button8);
			this->groupBox4->Location = System::Drawing::Point(155, 261);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(95, 84);
			this->groupBox4->TabIndex = 14;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Lista Norm Din";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(6, 19);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Guardar";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(6, 48);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Mostrar";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button9);
			this->groupBox5->Controls->Add(this->button10);
			this->groupBox5->Location = System::Drawing::Point(283, 261);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(95, 84);
			this->groupBox5->TabIndex = 15;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Pila Est";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(6, 19);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 10;
			this->button9->Text = L"Guardar";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(6, 48);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 9;
			this->button10->Text = L"Mostrar";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button11);
			this->groupBox6->Controls->Add(this->button12);
			this->groupBox6->Location = System::Drawing::Point(413, 261);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(95, 84);
			this->groupBox6->TabIndex = 16;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Pila Dinamica";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(6, 19);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 10;
			this->button11->Text = L"Guardar";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(6, 48);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 9;
			this->button12->Text = L"Mostrar";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(769, 380);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Tentrada);
			this->Controls->Add(this->Grid3);
			this->Controls->Add(this->Grid2);
			this->Controls->Add(this->Grid1);
			this->Controls->Add(this->TtamanoA);
			this->Name = L"Form1";
			this->Opacity = 0.95;
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TtamanoA_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		IO.Tam_Grid(Grid1, Tentrada);

	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		{

	IO.Grid_Memoria(Grid1, Tentrada);
	
	APP.Memoria_ListaCircEst(IO.ThisM());

	
	IO2.ThisM(APP.ListaCircEst_Memoria());
	IO2.Memoria_Grilla(Grid2);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	IO.Grid_Memoria(Grid1, Tentrada);

	APP.Memoria_ListaCircDim(IO.ThisM());


	IO2.ThisM(APP.ListaCDin_Memoria());
	IO2.Memoria_Grilla(Grid2);

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	

	IO2.ThisM(APP.ListaCircEst_Memoria());
	IO2.Memoria_Grilla(Grid3);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	

	IO2.ThisM(APP.ListaCDin_Memoria());
	IO2.Memoria_Grilla(Grid3);

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	IO.Grid_Memoria(Grid1, Tentrada);
	APP.Memoria_ListaLinealEst(IO.ThisM());
	IO2.ThisM(APP.ListaLinearEstatica_Memoria());
	IO2.Memoria_Grilla(Grid2);
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	IO2.ThisM(APP.ListaLinearEstatica_Memoria());
	IO2.Memoria_Grilla(Grid3);

}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	IO.Grid_Memoria(Grid1, Tentrada);
	APP.Memoria_ListaLinealDin(IO.ThisM());
	IO2.ThisM(APP.ListaLinearDinamic_Memoria());
	IO2.Memoria_Grilla(Grid2);
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	IO2.ThisM(APP.ListaLinearDinamic_Memoria());
	IO2.Memoria_Grilla(Grid3);
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	IO.Grid_Memoria(Grid1, Tentrada);
	APP.Memoria_PilaEst(IO.ThisM());
	IO2.ThisM(APP.PilaEstatica_Memoria());
	IO2.Memoria_Grilla(Grid2);
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	IO2.ThisM(APP.PilaEstatica_Memoria());
	IO2.Memoria_Grilla(Grid3);
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	IO.Grid_Memoria(Grid1, Tentrada);
	APP.Memoria_PilaDinamic(IO.ThisM());
	IO2.ThisM(APP.PilaDinamica_Memoria());
	IO2.Memoria_Grilla(Grid2);
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) 
		{
	IO2.ThisM(APP.PilaDinamica_Memoria());
	IO2.Memoria_Grilla(Grid3);
}
};
}
