#pragma once
#include "Aplicacion.h"
#include "INTERFAZ.h"
#include "string"
#include <Windows.h>
using namespace std;
namespace Listas_Forms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	INTERFAZ<int> IO,IO2,IO3;
	Aplicacion<int> APP,APP2;
	Aplicacion<int> APPM;
	Aplicacion<string> APPS,APPS2;
	INTERFAZ<string>  IOS;
	Aplicacion<Persona> x;
	int y;
	struct ar { int nomnre;double edad; string a; };
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
	private: System::Windows::Forms::TextBox^  Tentrada;
	private: System::Windows::Forms::DataGridView^  Grid1;
	private: System::Windows::Forms::DataGridView^  Grid2;
	protected:



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  Bmemoria_lista;
	private: System::Windows::Forms::Button^  Binvertir;
	private: System::Windows::Forms::DataGridView^  Grid3;
	private: System::Windows::Forms::Button^  Bordenar;
	private: System::Windows::Forms::Button^  BingresoO;

	private: System::Windows::Forms::Button^  BLmem;
	private: System::Windows::Forms::Button^  BLLista;
	private: System::Windows::Forms::DataGridView^  GridC;

	private: System::Windows::Forms::DataGridView^  GridB;

	private: System::Windows::Forms::DataGridView^  GridA;

	private: System::Windows::Forms::TextBox^  Ttamano_A;

	private: System::Windows::Forms::Button^  Btam_A;
	private: System::Windows::Forms::Button^  BtamB;
	private: System::Windows::Forms::TextBox^  Ttamano_B;
	private: System::Windows::Forms::Button^  Bingresar_A;
	private: System::Windows::Forms::Button^  Bmostrar_A;
	private: System::Windows::Forms::Button^  BmostrarB;








	private: System::Windows::Forms::Button^  BinsertarB;
	private: System::Windows::Forms::Button^  Bresta;


	private: System::Windows::Forms::Button^  BSuma;
	private: System::Windows::Forms::Button^  bderivar;



	private: System::Windows::Forms::Button^  Bmultiplic;

	private: System::Windows::Forms::Button^  Btam_Ent;
	private: System::Windows::Forms::Button^  Bpalabras;
	private: System::Windows::Forms::Button^  BEliminador_Sn;
	private: System::Windows::Forms::Button^  Brepetidos;
	private: System::Windows::Forms::DataGridView^  GridP;
	private: System::Windows::Forms::DataGridView^  GridP2;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  TtamanoP;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  MortoName;
	private: System::Windows::Forms::TextBox^  MortoNum;
	private: System::Windows::Forms::Button^  button4;


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
			this->Tentrada = (gcnew System::Windows::Forms::TextBox());
			this->Grid1 = (gcnew System::Windows::Forms::DataGridView());
			this->Grid2 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Bmemoria_lista = (gcnew System::Windows::Forms::Button());
			this->Binvertir = (gcnew System::Windows::Forms::Button());
			this->Grid3 = (gcnew System::Windows::Forms::DataGridView());
			this->Bordenar = (gcnew System::Windows::Forms::Button());
			this->BingresoO = (gcnew System::Windows::Forms::Button());
			this->BLmem = (gcnew System::Windows::Forms::Button());
			this->BLLista = (gcnew System::Windows::Forms::Button());
			this->GridC = (gcnew System::Windows::Forms::DataGridView());
			this->GridB = (gcnew System::Windows::Forms::DataGridView());
			this->GridA = (gcnew System::Windows::Forms::DataGridView());
			this->Ttamano_A = (gcnew System::Windows::Forms::TextBox());
			this->Btam_A = (gcnew System::Windows::Forms::Button());
			this->BtamB = (gcnew System::Windows::Forms::Button());
			this->Ttamano_B = (gcnew System::Windows::Forms::TextBox());
			this->Bingresar_A = (gcnew System::Windows::Forms::Button());
			this->Bmostrar_A = (gcnew System::Windows::Forms::Button());
			this->BmostrarB = (gcnew System::Windows::Forms::Button());
			this->BinsertarB = (gcnew System::Windows::Forms::Button());
			this->Bresta = (gcnew System::Windows::Forms::Button());
			this->BSuma = (gcnew System::Windows::Forms::Button());
			this->bderivar = (gcnew System::Windows::Forms::Button());
			this->Bmultiplic = (gcnew System::Windows::Forms::Button());
			this->Btam_Ent = (gcnew System::Windows::Forms::Button());
			this->Bpalabras = (gcnew System::Windows::Forms::Button());
			this->BEliminador_Sn = (gcnew System::Windows::Forms::Button());
			this->Brepetidos = (gcnew System::Windows::Forms::Button());
			this->GridP = (gcnew System::Windows::Forms::DataGridView());
			this->GridP2 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->TtamanoP = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->MortoName = (gcnew System::Windows::Forms::TextBox());
			this->MortoNum = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridC))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridP2))->BeginInit();
			this->SuspendLayout();
			// 
			// Tentrada
			// 
			this->Tentrada->Location = System::Drawing::Point(12, 28);
			this->Tentrada->Name = L"Tentrada";
			this->Tentrada->Size = System::Drawing::Size(121, 20);
			this->Tentrada->TabIndex = 0;
			this->Tentrada->Text = L"0";
			// 
			// Grid1
			// 
			this->Grid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grid1->Location = System::Drawing::Point(139, 54);
			this->Grid1->Name = L"Grid1";
			this->Grid1->Size = System::Drawing::Size(457, 52);
			this->Grid1->TabIndex = 1;
			// 
			// Grid2
			// 
			this->Grid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grid2->Location = System::Drawing::Point(139, 112);
			this->Grid2->Name = L"Grid2";
			this->Grid2->Size = System::Drawing::Size(457, 52);
			this->Grid2->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 83);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ingresar a Memoria";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Bmemoria_lista
			// 
			this->Bmemoria_lista->Location = System::Drawing::Point(13, 113);
			this->Bmemoria_lista->Name = L"Bmemoria_lista";
			this->Bmemoria_lista->Size = System::Drawing::Size(120, 23);
			this->Bmemoria_lista->TabIndex = 4;
			this->Bmemoria_lista->Text = L"Memoria Lista";
			this->Bmemoria_lista->UseVisualStyleBackColor = true;
			this->Bmemoria_lista->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// Binvertir
			// 
			this->Binvertir->Location = System::Drawing::Point(13, 142);
			this->Binvertir->Name = L"Binvertir";
			this->Binvertir->Size = System::Drawing::Size(120, 23);
			this->Binvertir->TabIndex = 5;
			this->Binvertir->Text = L"Invertir";
			this->Binvertir->UseVisualStyleBackColor = true;
			this->Binvertir->Click += gcnew System::EventHandler(this, &MyForm::Binvertir_Click);
			// 
			// Grid3
			// 
			this->Grid3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Grid3->Location = System::Drawing::Point(139, 171);
			this->Grid3->Name = L"Grid3";
			this->Grid3->Size = System::Drawing::Size(457, 52);
			this->Grid3->TabIndex = 6;
			// 
			// Bordenar
			// 
			this->Bordenar->Location = System::Drawing::Point(12, 171);
			this->Bordenar->Name = L"Bordenar";
			this->Bordenar->Size = System::Drawing::Size(121, 23);
			this->Bordenar->TabIndex = 7;
			this->Bordenar->Text = L"Ordenar";
			this->Bordenar->UseVisualStyleBackColor = true;
			this->Bordenar->Click += gcnew System::EventHandler(this, &MyForm::Bordenar_Click);
			// 
			// BingresoO
			// 
			this->BingresoO->Location = System::Drawing::Point(12, 200);
			this->BingresoO->Name = L"BingresoO";
			this->BingresoO->Size = System::Drawing::Size(121, 23);
			this->BingresoO->TabIndex = 8;
			this->BingresoO->Text = L"IngresoORdenado";
			this->BingresoO->UseVisualStyleBackColor = true;
			this->BingresoO->Click += gcnew System::EventHandler(this, &MyForm::BingresoO_Click);
			// 
			// BLmem
			// 
			this->BLmem->Location = System::Drawing::Point(139, 10);
			this->BLmem->Name = L"BLmem";
			this->BLmem->Size = System::Drawing::Size(62, 38);
			this->BLmem->TabIndex = 10;
			this->BLmem->Text = L"Limpiar Mem";
			this->BLmem->UseVisualStyleBackColor = true;
			this->BLmem->Click += gcnew System::EventHandler(this, &MyForm::BLmem_Click);
			// 
			// BLLista
			// 
			this->BLLista->Location = System::Drawing::Point(207, 10);
			this->BLLista->Name = L"BLLista";
			this->BLLista->Size = System::Drawing::Size(62, 38);
			this->BLLista->TabIndex = 11;
			this->BLLista->Text = L"Limpiar Lista";
			this->BLLista->UseVisualStyleBackColor = true;
			this->BLLista->Click += gcnew System::EventHandler(this, &MyForm::BLLista_Click);
			// 
			// GridC
			// 
			this->GridC->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GridC->Location = System::Drawing::Point(12, 427);
			this->GridC->Name = L"GridC";
			this->GridC->Size = System::Drawing::Size(366, 52);
			this->GridC->TabIndex = 14;
			// 
			// GridB
			// 
			this->GridB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GridB->Location = System::Drawing::Point(13, 342);
			this->GridB->Name = L"GridB";
			this->GridB->Size = System::Drawing::Size(366, 52);
			this->GridB->TabIndex = 13;
			// 
			// GridA
			// 
			this->GridA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GridA->Location = System::Drawing::Point(12, 260);
			this->GridA->Name = L"GridA";
			this->GridA->Size = System::Drawing::Size(366, 52);
			this->GridA->TabIndex = 12;
			// 
			// Ttamano_A
			// 
			this->Ttamano_A->Location = System::Drawing::Point(384, 263);
			this->Ttamano_A->Name = L"Ttamano_A";
			this->Ttamano_A->Size = System::Drawing::Size(75, 20);
			this->Ttamano_A->TabIndex = 15;
			this->Ttamano_A->Text = L"0";
			// 
			// Btam_A
			// 
			this->Btam_A->Location = System::Drawing::Point(384, 289);
			this->Btam_A->Name = L"Btam_A";
			this->Btam_A->Size = System::Drawing::Size(75, 23);
			this->Btam_A->TabIndex = 16;
			this->Btam_A->Text = L"TamA";
			this->Btam_A->UseVisualStyleBackColor = true;
			this->Btam_A->Click += gcnew System::EventHandler(this, &MyForm::Btam_A_Click);
			// 
			// BtamB
			// 
			this->BtamB->Location = System::Drawing::Point(384, 371);
			this->BtamB->Name = L"BtamB";
			this->BtamB->Size = System::Drawing::Size(75, 23);
			this->BtamB->TabIndex = 18;
			this->BtamB->Text = L"Tam_B";
			this->BtamB->UseVisualStyleBackColor = true;
			this->BtamB->Click += gcnew System::EventHandler(this, &MyForm::BtamB_Click);
			// 
			// Ttamano_B
			// 
			this->Ttamano_B->Location = System::Drawing::Point(384, 345);
			this->Ttamano_B->Name = L"Ttamano_B";
			this->Ttamano_B->Size = System::Drawing::Size(75, 20);
			this->Ttamano_B->TabIndex = 17;
			this->Ttamano_B->Text = L"0";
			// 
			// Bingresar_A
			// 
			this->Bingresar_A->Location = System::Drawing::Point(12, 318);
			this->Bingresar_A->Name = L"Bingresar_A";
			this->Bingresar_A->Size = System::Drawing::Size(75, 23);
			this->Bingresar_A->TabIndex = 21;
			this->Bingresar_A->Text = L"ingresarA";
			this->Bingresar_A->UseVisualStyleBackColor = true;
			this->Bingresar_A->Click += gcnew System::EventHandler(this, &MyForm::Bingresar_A_Click);
			// 
			// Bmostrar_A
			// 
			this->Bmostrar_A->Location = System::Drawing::Point(93, 318);
			this->Bmostrar_A->Name = L"Bmostrar_A";
			this->Bmostrar_A->Size = System::Drawing::Size(75, 23);
			this->Bmostrar_A->TabIndex = 22;
			this->Bmostrar_A->Text = L"MostrarA";
			this->Bmostrar_A->UseVisualStyleBackColor = true;
			this->Bmostrar_A->Click += gcnew System::EventHandler(this, &MyForm::Bmostrar_A_Click);
			// 
			// BmostrarB
			// 
			this->BmostrarB->Location = System::Drawing::Point(94, 400);
			this->BmostrarB->Name = L"BmostrarB";
			this->BmostrarB->Size = System::Drawing::Size(75, 23);
			this->BmostrarB->TabIndex = 24;
			this->BmostrarB->Text = L"MostrarB";
			this->BmostrarB->UseVisualStyleBackColor = true;
			this->BmostrarB->Click += gcnew System::EventHandler(this, &MyForm::BmostrarB_Click);
			// 
			// BinsertarB
			// 
			this->BinsertarB->Location = System::Drawing::Point(13, 400);
			this->BinsertarB->Name = L"BinsertarB";
			this->BinsertarB->Size = System::Drawing::Size(75, 23);
			this->BinsertarB->TabIndex = 23;
			this->BinsertarB->Text = L"InsertarB";
			this->BinsertarB->UseVisualStyleBackColor = true;
			this->BinsertarB->Click += gcnew System::EventHandler(this, &MyForm::BinsertarB_Click);
			// 
			// Bresta
			// 
			this->Bresta->Location = System::Drawing::Point(94, 485);
			this->Bresta->Name = L"Bresta";
			this->Bresta->Size = System::Drawing::Size(75, 23);
			this->Bresta->TabIndex = 26;
			this->Bresta->Text = L"Resta";
			this->Bresta->UseVisualStyleBackColor = true;
			this->Bresta->Click += gcnew System::EventHandler(this, &MyForm::Bresta_Click);
			// 
			// BSuma
			// 
			this->BSuma->Location = System::Drawing::Point(13, 485);
			this->BSuma->Name = L"BSuma";
			this->BSuma->Size = System::Drawing::Size(75, 23);
			this->BSuma->TabIndex = 25;
			this->BSuma->Text = L"Suma";
			this->BSuma->UseVisualStyleBackColor = true;
			this->BSuma->Click += gcnew System::EventHandler(this, &MyForm::BSuma_Click);
			// 
			// bderivar
			// 
			this->bderivar->Location = System::Drawing::Point(256, 485);
			this->bderivar->Name = L"bderivar";
			this->bderivar->Size = System::Drawing::Size(75, 23);
			this->bderivar->TabIndex = 28;
			this->bderivar->Text = L"Derivar";
			this->bderivar->UseVisualStyleBackColor = true;
			// 
			// Bmultiplic
			// 
			this->Bmultiplic->Location = System::Drawing::Point(175, 485);
			this->Bmultiplic->Name = L"Bmultiplic";
			this->Bmultiplic->Size = System::Drawing::Size(75, 23);
			this->Bmultiplic->TabIndex = 27;
			this->Bmultiplic->Text = L"Bmultiplic";
			this->Bmultiplic->UseVisualStyleBackColor = true;
			// 
			// Btam_Ent
			// 
			this->Btam_Ent->Location = System::Drawing::Point(13, 54);
			this->Btam_Ent->Name = L"Btam_Ent";
			this->Btam_Ent->Size = System::Drawing::Size(121, 23);
			this->Btam_Ent->TabIndex = 29;
			this->Btam_Ent->Text = L"Tamano";
			this->Btam_Ent->UseVisualStyleBackColor = true;
			this->Btam_Ent->Click += gcnew System::EventHandler(this, &MyForm::Btam_Ent_Click);
			// 
			// Bpalabras
			// 
			this->Bpalabras->Location = System::Drawing::Point(274, 25);
			this->Bpalabras->Name = L"Bpalabras";
			this->Bpalabras->Size = System::Drawing::Size(129, 23);
			this->Bpalabras->TabIndex = 30;
			this->Bpalabras->Text = L"Ingreso Palabras";
			this->Bpalabras->UseVisualStyleBackColor = true;
			this->Bpalabras->Click += gcnew System::EventHandler(this, &MyForm::Bpalabras_Click);
			// 
			// BEliminador_Sn
			// 
			this->BEliminador_Sn->Location = System::Drawing::Point(409, 25);
			this->BEliminador_Sn->Name = L"BEliminador_Sn";
			this->BEliminador_Sn->Size = System::Drawing::Size(129, 23);
			this->BEliminador_Sn->TabIndex = 31;
			this->BEliminador_Sn->Text = L"Eliminar Sn";
			this->BEliminador_Sn->UseVisualStyleBackColor = true;
			this->BEliminador_Sn->Click += gcnew System::EventHandler(this, &MyForm::BEliminador_Sn_Click);
			// 
			// Brepetidos
			// 
			this->Brepetidos->Location = System::Drawing::Point(12, 229);
			this->Brepetidos->Name = L"Brepetidos";
			this->Brepetidos->Size = System::Drawing::Size(121, 23);
			this->Brepetidos->TabIndex = 32;
			this->Brepetidos->Text = L"Eliminar Repetidos";
			this->Brepetidos->UseVisualStyleBackColor = true;
			this->Brepetidos->Click += gcnew System::EventHandler(this, &MyForm::Brepetidos_Click_1);
			// 
			// GridP
			// 
			this->GridP->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GridP->Location = System::Drawing::Point(519, 263);
			this->GridP->Name = L"GridP";
			this->GridP->Size = System::Drawing::Size(286, 52);
			this->GridP->TabIndex = 33;
			// 
			// GridP2
			// 
			this->GridP2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GridP2->Location = System::Drawing::Point(519, 321);
			this->GridP2->Name = L"GridP2";
			this->GridP2->Size = System::Drawing::Size(286, 52);
			this->GridP2->TabIndex = 34;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(811, 289);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 36;
			this->button2->Text = L"TamP";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// TtamanoP
			// 
			this->TtamanoP->Location = System::Drawing::Point(811, 263);
			this->TtamanoP->Name = L"TtamanoP";
			this->TtamanoP->Size = System::Drawing::Size(75, 20);
			this->TtamanoP->TabIndex = 35;
			this->TtamanoP->Text = L"0";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(811, 321);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 37;
			this->button3->Text = L"Bum";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MortoName
			// 
			this->MortoName->Location = System::Drawing::Point(811, 353);
			this->MortoName->Name = L"MortoName";
			this->MortoName->Size = System::Drawing::Size(75, 20);
			this->MortoName->TabIndex = 38;
			this->MortoName->Text = L"0";
			// 
			// MortoNum
			// 
			this->MortoNum->Location = System::Drawing::Point(811, 379);
			this->MortoNum->Name = L"MortoNum";
			this->MortoNum->Size = System::Drawing::Size(75, 20);
			this->MortoNum->TabIndex = 39;
			this->MortoNum->Text = L"-1";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(479, 350);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(34, 23);
			this->button4->TabIndex = 40;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(913, 510);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->MortoNum);
			this->Controls->Add(this->MortoName);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->TtamanoP);
			this->Controls->Add(this->GridP2);
			this->Controls->Add(this->GridP);
			this->Controls->Add(this->Brepetidos);
			this->Controls->Add(this->BEliminador_Sn);
			this->Controls->Add(this->Bpalabras);
			this->Controls->Add(this->Btam_Ent);
			this->Controls->Add(this->bderivar);
			this->Controls->Add(this->Bmultiplic);
			this->Controls->Add(this->Bresta);
			this->Controls->Add(this->BSuma);
			this->Controls->Add(this->BmostrarB);
			this->Controls->Add(this->BinsertarB);
			this->Controls->Add(this->Bmostrar_A);
			this->Controls->Add(this->Bingresar_A);
			this->Controls->Add(this->BtamB);
			this->Controls->Add(this->Ttamano_B);
			this->Controls->Add(this->Btam_A);
			this->Controls->Add(this->Ttamano_A);
			this->Controls->Add(this->GridC);
			this->Controls->Add(this->GridB);
			this->Controls->Add(this->GridA);
			this->Controls->Add(this->BLLista);
			this->Controls->Add(this->BLmem);
			this->Controls->Add(this->BingresoO);
			this->Controls->Add(this->Bordenar);
			this->Controls->Add(this->Grid3);
			this->Controls->Add(this->Binvertir);
			this->Controls->Add(this->Bmemoria_lista);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Grid2);
			this->Controls->Add(this->Grid1);
			this->Controls->Add(this->Tentrada);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Grid3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridC))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridP2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		IO.Grid_Memoria(Grid1,Tentrada);
		IO.Memoria_Grilla(Grid1);
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.Memoria_Lista(IO.ThisM());
	APP2.ThisM(APP.Lista_Memoria(APP.ThisL()));
	IO2.ThisM(APP2.ThisM());
	IO2.Memoria_Grilla(Grid2);

}
private: System::Void Binvertir_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.InvertirLista();

	APP2.ThisM(APP.Lista_Memoria(APP.ThisL()));
	IO2.ThisM(APP2.ThisM());
	IO2.Memoria_Grilla(Grid3);

}
private: System::Void Bordenar_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.Ordenar();
	APP2.ThisM(APP.Lista_Memoria(APP.ThisL()));
	IO2.ThisM(APP2.ThisM());
	IO2.Memoria_Grilla(Grid3);
}
private: System::Void BingresoO_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.IngresarOrdenadamente(IO.Node(Tentrada));
	APP2.ThisM(APP.Lista_Memoria(APP.ThisL()));
	IO2.ThisM(APP2.ThisM());
	IO2.Memoria_Grilla(Grid3);
}
private: System::Void BLmem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IO.Clear(Grid1);
}
private: System::Void BLLista_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.ClearList();
}
private: System::Void Brepetidos_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APP.Eliminar_repetidos();
	APP2.ThisM(APP.Lista_Memoria(APP.ThisL()));
	IO2.ThisM(APP2.ThisM());
	IO2.Memoria_Grilla(Grid3);
}
private: System::Void Btam_A_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IO.Tam_Grid(GridA, Ttamano_A);
}
private: System::Void BtamB_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IO.Tam_Grid(GridB, Ttamano_B);
}
private: System::Void Bingresar_A_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IO3.Grid_Memoria(GridA, Ttamano_A);
	APPM.Memoria_Polinomio(IO3.ThisM(),'A');
}
private: System::Void Btam_Ent_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IO.Tam_Grid(Grid1,Tentrada);
}
private: System::Void Bpalabras_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IOS.Grid_Memoria_Str(Grid1, Tentrada);
	IOS.Memoria_Str_Grid(Grid2);
	//funciona
}
private: System::Void BEliminador_Sn_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APPS.Memoria_Lista(IOS.ThisM());
	APPS2.ThisL(APPS.EliminarSyN());
	IOS.ThisM(APPS.Lista_Memoria(APPS.ThisL()));
	IOS.Memoria_Str_Grid(Grid2);
	IOS.ThisM(APPS2.Lista_Memoria(APPS2.ThisL()));
	IOS.Memoria_Str_Grid(Grid3);

}
private: System::Void Bmostrar_A_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IO2.ThisM(APPM.Polinomio_Memoria(APPM.This_Polinomio('A')));
	IO2.Memoria_Grilla(GridC);
	

}
private: System::Void BSuma_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APPM.SumarPolinomio();
	IO2.ThisM(APPM.Polinomio_Memoria(APPM.This_Polinomio('B')));
	IO2.Memoria_Grilla(GridC);
}
private: System::Void BinsertarB_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IO3.Grid_Memoria(GridB, Ttamano_B);
	APPM.Memoria_Polinomio(IO3.ThisM(), 'B');
}
private: System::Void BmostrarB_Click(System::Object^  sender, System::EventArgs^  e) 
{
	IO2.ThisM(APPM.Polinomio_Memoria(APPM.This_Polinomio('B')));
	IO2.Memoria_Grilla(GridC);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Nodo<Persona>aux;
	int h = Convert::ToInt32(MortoNum->Text);
	if (h==-1) {
		IOS.Grid_Memoria_Str(GridP, TtamanoP);//terminar

		x.Memoria_Personas(IOS.ThisM());
	}
	aux = x.LaCosaDeManolo(Convert::ToInt32(MortoNum->Text),y);
	MortoName->Text = marshal_as<System::String^>(aux.Elemento().Nombre());
	MortoNum->Text= Convert::ToString((aux.Elemento().Numero()));
	IOS.ThisM(x.Persona_Memoria(x.ThisL()));
	IOS.Memoria_Str_Grid(GridP2);
	y = aux.Apuntador();

}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
	IOS.Tam_Grid(GridP,TtamanoP);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{

	IOS.ThisM(x.Persona_Memoria(x.ThisL()));
	IOS.Memoria_Str_Grid(GridP);
	TtamanoP->Text = Convert::ToString(IOS.Tamano());
	IOS.Clear(GridP2);

}
private: System::Void Brepetidos_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
	APP.Eliminar_repetidos();
	APP2.ThisM(APP.Lista_Memoria(APP.ThisL()));
	IO2.ThisM(APP2.ThisM());
	IO2.Memoria_Grilla(Grid3);
}
private: System::Void Bresta_Click(System::Object^  sender, System::EventArgs^  e) 
{
	APPM.RestarPolinomio();
	IO2.ThisM(APPM.Polinomio_Memoria(APPM.This_Polinomio('B')));
	IO2.Memoria_Grilla(GridC);
}
};
}
