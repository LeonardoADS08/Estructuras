#pragma once
#include "APLICACION.h"
#include "INTERFAZ.h"
namespace PilasDobles_Forms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	APLICACION<int, int> APP;
	INTERFAZ<int> IO, IO2;
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
	private: System::Windows::Forms::Button^  Bpilafull;
	protected:
	private: System::Windows::Forms::ComboBox^  Combolado2;
	private: System::Windows::Forms::Button^  Bpila_lado_m;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  Tmemoria;
	private: System::Windows::Forms::ComboBox^  Combolado;
	private: System::Windows::Forms::Button^  Bpila_lado;
	private: System::Windows::Forms::Button^  Bmemoria;

	private: System::Windows::Forms::DataGridView^  Grid2;
	private: System::Windows::Forms::DataGridView^  Grid1;
	private: System::Windows::Forms::Button^  Bingordenlado;
	private: System::Windows::Forms::ComboBox^  ComboLadoC;
	private: System::Windows::Forms::Button^  Bordenar;
	private: System::Windows::Forms::ComboBox^  ComboLadoD;
	private: System::Windows::Forms::Button^  Brepetidos;
	private: System::Windows::Forms::ComboBox^  ComboLadoE;
	private: System::Windows::Forms::TextBox^  TNrepetidos;
	private: System::Windows::Forms::Button^  Binvertir;





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
			this->Bpilafull = (gcnew System::Windows::Forms::Button());
			this->Combolado2 = (gcnew System::Windows::Forms::ComboBox());
			this->Bpila_lado_m = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Tmemoria = (gcnew System::Windows::Forms::TextBox());
			this->Combolado = (gcnew System::Windows::Forms::ComboBox());
			this->Bpila_lado = (gcnew System::Windows::Forms::Button());
			this->Bmemoria = (gcnew System::Windows::Forms::Button());
			this->Grid2 = (gcnew System::Windows::Forms::DataGridView());
			this->Grid1 = (gcnew System::Windows::Forms::DataGridView());
			this->Bingordenlado = (gcnew System::Windows::Forms::Button());
			this->ComboLadoC = (gcnew System::Windows::Forms::ComboBox());
			this->Bordenar = (gcnew System::Windows::Forms::Button());
			this->ComboLadoD = (gcnew System::Windows::Forms::ComboBox());
			this->Brepetidos = (gcnew System::Windows::Forms::Button());
			this->ComboLadoE = (gcnew System::Windows::Forms::ComboBox());
			this->TNrepetidos = (gcnew System::Windows::Forms::TextBox());
			this->Binvertir = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid1))->BeginInit();
			this->SuspendLayout();
			// 
			// Bpilafull
			// 
			this->Bpilafull->Location = System::Drawing::Point(22, 180);
			this->Bpilafull->Name = L"Bpilafull";
			this->Bpilafull->Size = System::Drawing::Size(117, 23);
			this->Bpilafull->TabIndex = 21;
			this->Bpilafull->Text = L"Mostart pila completa";
			this->Bpilafull->UseVisualStyleBackColor = true;
			this->Bpilafull->Click += gcnew System::EventHandler(this, &MyForm::Bpilafull_Click);
			// 
			// Combolado2
			// 
			this->Combolado2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Combolado2->FormattingEnabled = true;
			this->Combolado2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1", L"2" });
			this->Combolado2->Location = System::Drawing::Point(148, 151);
			this->Combolado2->Name = L"Combolado2";
			this->Combolado2->Size = System::Drawing::Size(37, 21);
			this->Combolado2->TabIndex = 20;
			// 
			// Bpila_lado_m
			// 
			this->Bpila_lado_m->Location = System::Drawing::Point(22, 151);
			this->Bpila_lado_m->Name = L"Bpila_lado_m";
			this->Bpila_lado_m->Size = System::Drawing::Size(117, 23);
			this->Bpila_lado_m->TabIndex = 19;
			this->Bpila_lado_m->Text = L"Mostrar pila lado";
			this->Bpila_lado_m->UseVisualStyleBackColor = true;
			this->Bpila_lado_m->Click += gcnew System::EventHandler(this, &MyForm::Bpila_lado_m_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(148, 55);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(37, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"CLR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Tmemoria
			// 
			this->Tmemoria->Location = System::Drawing::Point(22, 55);
			this->Tmemoria->Name = L"Tmemoria";
			this->Tmemoria->Size = System::Drawing::Size(117, 20);
			this->Tmemoria->TabIndex = 17;
			this->Tmemoria->Text = L"0";
			// 
			// Combolado
			// 
			this->Combolado->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Combolado->FormattingEnabled = true;
			this->Combolado->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1", L"2" });
			this->Combolado->Location = System::Drawing::Point(148, 124);
			this->Combolado->Name = L"Combolado";
			this->Combolado->Size = System::Drawing::Size(37, 21);
			this->Combolado->TabIndex = 16;
			// 
			// Bpila_lado
			// 
			this->Bpila_lado->Location = System::Drawing::Point(22, 122);
			this->Bpila_lado->Name = L"Bpila_lado";
			this->Bpila_lado->Size = System::Drawing::Size(117, 23);
			this->Bpila_lado->TabIndex = 15;
			this->Bpila_lado->Text = L"Insertar en Lado";
			this->Bpila_lado->UseVisualStyleBackColor = true;
			this->Bpila_lado->Click += gcnew System::EventHandler(this, &MyForm::Bpila_lado_Click);
			// 
			// Bmemoria
			// 
			this->Bmemoria->Location = System::Drawing::Point(22, 93);
			this->Bmemoria->Name = L"Bmemoria";
			this->Bmemoria->Size = System::Drawing::Size(117, 23);
			this->Bmemoria->TabIndex = 14;
			this->Bmemoria->Text = L"Insertar Memoria";
			this->Bmemoria->UseVisualStyleBackColor = true;
			this->Bmemoria->Click += gcnew System::EventHandler(this, &MyForm::Bmemoria_Click);
			// 
			// Grid2
			// 
			this->Grid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grid2->Location = System::Drawing::Point(352, 41);
			this->Grid2->Name = L"Grid2";
			this->Grid2->Size = System::Drawing::Size(117, 180);
			this->Grid2->TabIndex = 12;
			// 
			// Grid1
			// 
			this->Grid1->AllowUserToAddRows = false;
			this->Grid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grid1->Location = System::Drawing::Point(206, 41);
			this->Grid1->Name = L"Grid1";
			this->Grid1->Size = System::Drawing::Size(117, 180);
			this->Grid1->TabIndex = 11;
			// 
			// Bingordenlado
			// 
			this->Bingordenlado->Location = System::Drawing::Point(22, 209);
			this->Bingordenlado->Name = L"Bingordenlado";
			this->Bingordenlado->Size = System::Drawing::Size(117, 23);
			this->Bingordenlado->TabIndex = 22;
			this->Bingordenlado->Text = L"Ingresar pororden en lado";
			this->Bingordenlado->UseVisualStyleBackColor = true;
			this->Bingordenlado->Click += gcnew System::EventHandler(this, &MyForm::Bingordenlado_Click);
			// 
			// ComboLadoC
			// 
			this->ComboLadoC->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ComboLadoC->FormattingEnabled = true;
			this->ComboLadoC->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1", L"2" });
			this->ComboLadoC->Location = System::Drawing::Point(148, 209);
			this->ComboLadoC->Name = L"ComboLadoC";
			this->ComboLadoC->Size = System::Drawing::Size(37, 21);
			this->ComboLadoC->TabIndex = 23;
			// 
			// Bordenar
			// 
			this->Bordenar->Location = System::Drawing::Point(22, 238);
			this->Bordenar->Name = L"Bordenar";
			this->Bordenar->Size = System::Drawing::Size(117, 23);
			this->Bordenar->TabIndex = 24;
			this->Bordenar->Text = L"Ordenar pila lado";
			this->Bordenar->UseVisualStyleBackColor = true;
			this->Bordenar->Click += gcnew System::EventHandler(this, &MyForm::Bordenar_Click);
			// 
			// ComboLadoD
			// 
			this->ComboLadoD->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ComboLadoD->FormattingEnabled = true;
			this->ComboLadoD->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1", L"2" });
			this->ComboLadoD->Location = System::Drawing::Point(148, 240);
			this->ComboLadoD->Name = L"ComboLadoD";
			this->ComboLadoD->Size = System::Drawing::Size(37, 21);
			this->ComboLadoD->TabIndex = 25;
			// 
			// Brepetidos
			// 
			this->Brepetidos->Location = System::Drawing::Point(22, 267);
			this->Brepetidos->Name = L"Brepetidos";
			this->Brepetidos->Size = System::Drawing::Size(117, 23);
			this->Brepetidos->TabIndex = 26;
			this->Brepetidos->Text = L"eliminarNrepetidos";
			this->Brepetidos->UseVisualStyleBackColor = true;
			this->Brepetidos->Click += gcnew System::EventHandler(this, &MyForm::Brepetidos_Click);
			// 
			// ComboLadoE
			// 
			this->ComboLadoE->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ComboLadoE->FormattingEnabled = true;
			this->ComboLadoE->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1", L"2" });
			this->ComboLadoE->Location = System::Drawing::Point(148, 269);
			this->ComboLadoE->Name = L"ComboLadoE";
			this->ComboLadoE->Size = System::Drawing::Size(37, 21);
			this->ComboLadoE->TabIndex = 27;
			// 
			// TNrepetidos
			// 
			this->TNrepetidos->Location = System::Drawing::Point(206, 269);
			this->TNrepetidos->Name = L"TNrepetidos";
			this->TNrepetidos->Size = System::Drawing::Size(35, 20);
			this->TNrepetidos->TabIndex = 28;
			this->TNrepetidos->Text = L"0";
			// 
			// Binvertir
			// 
			this->Binvertir->Location = System::Drawing::Point(22, 296);
			this->Binvertir->Name = L"Binvertir";
			this->Binvertir->Size = System::Drawing::Size(117, 23);
			this->Binvertir->TabIndex = 29;
			this->Binvertir->Text = L"invertir";
			this->Binvertir->UseVisualStyleBackColor = true;
			this->Binvertir->Click += gcnew System::EventHandler(this, &MyForm::Binvertir_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(491, 356);
			this->Controls->Add(this->Binvertir);
			this->Controls->Add(this->TNrepetidos);
			this->Controls->Add(this->ComboLadoE);
			this->Controls->Add(this->Brepetidos);
			this->Controls->Add(this->ComboLadoD);
			this->Controls->Add(this->Bordenar);
			this->Controls->Add(this->ComboLadoC);
			this->Controls->Add(this->Bingordenlado);
			this->Controls->Add(this->Bpilafull);
			this->Controls->Add(this->Combolado2);
			this->Controls->Add(this->Bpila_lado_m);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Tmemoria);
			this->Controls->Add(this->Combolado);
			this->Controls->Add(this->Bpila_lado);
			this->Controls->Add(this->Bmemoria);
			this->Controls->Add(this->Grid2);
			this->Controls->Add(this->Grid1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		Combolado->Text = "1";
		Combolado2->Text = "1";
		ComboLadoC->Text = "1";
	ComboLadoD->Text = "1";
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	IO.Clear(Grid1);
}
private: System::Void Bmemoria_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IO.Grid_Memoria(Grid1, Tmemoria);
	IO.Memria_Grid(Grid1, 1);
}
private: System::Void Bpila_lado_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.Memoria_Pila_Lado(IO.This_Memoria(), Convert::ToInt32(Combolado->Text));

}
private: System::Void Bpila_lado_m_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IO2.This_Memoria(APP.PilaLado_Memoria(APP.These(), Convert::ToInt32(Combolado2->Text)));
	IO2.Memria_Grid(Grid2, 2);
}
private: System::Void Bpilafull_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IO2.This_Memoria(APP.PilaCompleta_Memoria(APP.These()));
	IO2.Memria_Grid(Grid2, 2);
}
private: System::Void Bingordenlado_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.IngrearOrdenadamenteLado(Convert::ToInt32(ComboLadoC->Text), IO.Node(Tmemoria));
	IO2.This_Memoria(APP.PilaLado_Memoria(APP.These(), Convert::ToInt32(ComboLadoC->Text)));
	IO2.Memria_Grid(Grid2, 2);
}
private: System::Void Bordenar_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.OrdenarLado(Convert::ToInt32(ComboLadoD->Text));
	IO2.This_Memoria(APP.PilaLado_Memoria(APP.These(), Convert::ToInt32(ComboLadoD->Text)));
	IO2.Memria_Grid(Grid2, 2);
}
private: System::Void Brepetidos_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.EliminarNrepetidosLado(Convert::ToInt32(ComboLadoE->Text), Convert::ToInt32(TNrepetidos->Text));
	IO2.This_Memoria(APP.PilaLado_Memoria(APP.These(), Convert::ToInt32(ComboLadoE->Text)));
	IO2.Memria_Grid(Grid2, 2);
}
private: System::Void Binvertir_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.Invertir();
	IO2.This_Memoria(APP.PilaCompleta_Memoria(APP.These()));
	IO2.Memria_Grid(Grid2, 2);
}
};
}
