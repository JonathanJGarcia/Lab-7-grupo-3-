#pragma once
#include "Poligonos.h"
#include "Poligonos.cpp"
#include <fstream>
#include <string>
#include <iostream>

Principal poligonos;

namespace Lab7grupo3ejercicio2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


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
	private: System::Windows::Forms::GroupBox^ groupBox3;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ lbl_Color;
	private: System::Windows::Forms::Label^ labelCR;
	private: System::Windows::Forms::Label^ lbl_Area;
	private: System::Windows::Forms::Label^ labelP;
	private: System::Windows::Forms::Label^ lbl_Perimetro;
	private: System::Windows::Forms::Label^ labelAR;
	private: System::Windows::Forms::Label^ lbl_TipoPoligono;
	private: System::Windows::Forms::Label^ labelT;
	private: System::Windows::Forms::Label^ lbl_IDPoligono;
	private: System::Windows::Forms::Label^ labelD;
	private: System::Windows::Forms::Label^ labelID;
	private: System::Windows::Forms::TextBox^ txt_BuscarID;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBoxA;
	private: System::Windows::Forms::TextBox^ textBoxB;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ txt_ListaPoligonos;
	private: System::Windows::Forms::ComboBox^ comboBoxCO;
	private: System::Windows::Forms::RadioButton^ radioButtonT;
	private: System::Windows::Forms::Label^ labelC;
	private: System::Windows::Forms::RadioButton^ radioButtonC;
	private: System::Windows::Forms::RadioButton^ radioButtonR;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ labelB;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ labelA;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lbl_Color = (gcnew System::Windows::Forms::Label());
			this->labelCR = (gcnew System::Windows::Forms::Label());
			this->lbl_Area = (gcnew System::Windows::Forms::Label());
			this->labelP = (gcnew System::Windows::Forms::Label());
			this->lbl_Perimetro = (gcnew System::Windows::Forms::Label());
			this->labelAR = (gcnew System::Windows::Forms::Label());
			this->lbl_TipoPoligono = (gcnew System::Windows::Forms::Label());
			this->labelT = (gcnew System::Windows::Forms::Label());
			this->lbl_IDPoligono = (gcnew System::Windows::Forms::Label());
			this->labelD = (gcnew System::Windows::Forms::Label());
			this->labelID = (gcnew System::Windows::Forms::Label());
			this->txt_BuscarID = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxB = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->txt_ListaPoligonos = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxCO = (gcnew System::Windows::Forms::ComboBox());
			this->radioButtonT = (gcnew System::Windows::Forms::RadioButton());
			this->labelC = (gcnew System::Windows::Forms::Label());
			this->radioButtonC = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonR = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->labelB = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->labelA = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->groupBox1);
			this->groupBox3->Controls->Add(this->labelID);
			this->groupBox3->Controls->Add(this->txt_BuscarID);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(28, 406);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(736, 249);
			this->groupBox3->TabIndex = 74;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Mostrar según ID";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->lbl_Color);
			this->groupBox1->Controls->Add(this->labelCR);
			this->groupBox1->Controls->Add(this->lbl_Area);
			this->groupBox1->Controls->Add(this->labelP);
			this->groupBox1->Controls->Add(this->lbl_Perimetro);
			this->groupBox1->Controls->Add(this->labelAR);
			this->groupBox1->Controls->Add(this->lbl_TipoPoligono);
			this->groupBox1->Controls->Add(this->labelT);
			this->groupBox1->Controls->Add(this->lbl_IDPoligono);
			this->groupBox1->Controls->Add(this->labelD);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->groupBox1->Location = System::Drawing::Point(266, 42);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(429, 186);
			this->groupBox1->TabIndex = 47;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Poligono Buscado";
			// 
			// lbl_Color
			// 
			this->lbl_Color->AutoSize = true;
			this->lbl_Color->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Color->Location = System::Drawing::Point(91, 117);
			this->lbl_Color->Name = L"lbl_Color";
			this->lbl_Color->Size = System::Drawing::Size(47, 20);
			this->lbl_Color->TabIndex = 20;
			this->lbl_Color->Text = L"color";
			// 
			// labelCR
			// 
			this->labelCR->AutoSize = true;
			this->labelCR->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCR->Location = System::Drawing::Point(34, 119);
			this->labelCR->Name = L"labelCR";
			this->labelCR->Size = System::Drawing::Size(57, 18);
			this->labelCR->TabIndex = 19;
			this->labelCR->Text = L"Color: ";
			// 
			// lbl_Area
			// 
			this->lbl_Area->AutoSize = true;
			this->lbl_Area->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Area->Location = System::Drawing::Point(91, 92);
			this->lbl_Area->Name = L"lbl_Area";
			this->lbl_Area->Size = System::Drawing::Size(44, 20);
			this->lbl_Area->TabIndex = 18;
			this->lbl_Area->Text = L"area";
			// 
			// labelP
			// 
			this->labelP->AutoSize = true;
			this->labelP->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelP->Location = System::Drawing::Point(35, 142);
			this->labelP->Name = L"labelP";
			this->labelP->Size = System::Drawing::Size(86, 18);
			this->labelP->TabIndex = 17;
			this->labelP->Text = L"Perímetro: ";
			// 
			// lbl_Perimetro
			// 
			this->lbl_Perimetro->AutoSize = true;
			this->lbl_Perimetro->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Perimetro->Location = System::Drawing::Point(127, 140);
			this->lbl_Perimetro->Name = L"lbl_Perimetro";
			this->lbl_Perimetro->Size = System::Drawing::Size(80, 20);
			this->lbl_Perimetro->TabIndex = 16;
			this->lbl_Perimetro->Text = L"perimetro";
			// 
			// labelAR
			// 
			this->labelAR->AutoSize = true;
			this->labelAR->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAR->Location = System::Drawing::Point(33, 93);
			this->labelAR->Name = L"labelAR";
			this->labelAR->Size = System::Drawing::Size(52, 18);
			this->labelAR->TabIndex = 15;
			this->labelAR->Text = L"Área: ";
			// 
			// lbl_TipoPoligono
			// 
			this->lbl_TipoPoligono->AutoSize = true;
			this->lbl_TipoPoligono->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_TipoPoligono->Location = System::Drawing::Point(91, 64);
			this->lbl_TipoPoligono->Name = L"lbl_TipoPoligono";
			this->lbl_TipoPoligono->Size = System::Drawing::Size(37, 20);
			this->lbl_TipoPoligono->TabIndex = 14;
			this->lbl_TipoPoligono->Text = L"tipo";
			// 
			// labelT
			// 
			this->labelT->AutoSize = true;
			this->labelT->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelT->Location = System::Drawing::Point(34, 65);
			this->labelT->Name = L"labelT";
			this->labelT->Size = System::Drawing::Size(46, 18);
			this->labelT->TabIndex = 13;
			this->labelT->Text = L"Tipo: ";
			// 
			// lbl_IDPoligono
			// 
			this->lbl_IDPoligono->AutoSize = true;
			this->lbl_IDPoligono->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_IDPoligono->Location = System::Drawing::Point(91, 37);
			this->lbl_IDPoligono->Name = L"lbl_IDPoligono";
			this->lbl_IDPoligono->Size = System::Drawing::Size(22, 20);
			this->lbl_IDPoligono->TabIndex = 12;
			this->lbl_IDPoligono->Text = L"id";
			// 
			// labelD
			// 
			this->labelD->AutoSize = true;
			this->labelD->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelD->Location = System::Drawing::Point(36, 38);
			this->labelD->Name = L"labelD";
			this->labelD->Size = System::Drawing::Size(31, 18);
			this->labelD->TabIndex = 11;
			this->labelD->Text = L"ID: ";
			// 
			// labelID
			// 
			this->labelID->AutoSize = true;
			this->labelID->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelID->Location = System::Drawing::Point(49, 69);
			this->labelID->Name = L"labelID";
			this->labelID->Size = System::Drawing::Size(105, 20);
			this->labelID->TabIndex = 45;
			this->labelID->Text = L"Ingrese el ID:";
			// 
			// txt_BuscarID
			// 
			this->txt_BuscarID->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_BuscarID->Location = System::Drawing::Point(53, 97);
			this->txt_BuscarID->Name = L"txt_BuscarID";
			this->txt_BuscarID->Size = System::Drawing::Size(168, 26);
			this->txt_BuscarID->TabIndex = 46;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(53, 135);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 34);
			this->button1->TabIndex = 62;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBoxA);
			this->groupBox2->Controls->Add(this->textBoxB);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->txt_ListaPoligonos);
			this->groupBox2->Controls->Add(this->comboBoxCO);
			this->groupBox2->Controls->Add(this->radioButtonT);
			this->groupBox2->Controls->Add(this->labelC);
			this->groupBox2->Controls->Add(this->radioButtonC);
			this->groupBox2->Controls->Add(this->radioButtonR);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->labelB);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->labelA);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(28, 26);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(736, 355);
			this->groupBox2->TabIndex = 73;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Poligonos";
			// 
			// textBoxA
			// 
			this->textBoxA->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxA->Location = System::Drawing::Point(291, 201);
			this->textBoxA->Multiline = true;
			this->textBoxA->Name = L"textBoxA";
			this->textBoxA->Size = System::Drawing::Size(90, 22);
			this->textBoxA->TabIndex = 69;
			// 
			// textBoxB
			// 
			this->textBoxB->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxB->Location = System::Drawing::Point(291, 163);
			this->textBoxB->Multiline = true;
			this->textBoxB->Name = L"textBoxB";
			this->textBoxB->Size = System::Drawing::Size(90, 22);
			this->textBoxB->TabIndex = 68;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(406, 275);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(289, 34);
			this->button3->TabIndex = 64;
			this->button3->Text = L"Mostrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(122, 280);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(90, 22);
			this->textBox4->TabIndex = 67;
			// 
			// txt_ListaPoligonos
			// 
			this->txt_ListaPoligonos->Location = System::Drawing::Point(406, 33);
			this->txt_ListaPoligonos->Multiline = true;
			this->txt_ListaPoligonos->Name = L"txt_ListaPoligonos";
			this->txt_ListaPoligonos->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txt_ListaPoligonos->Size = System::Drawing::Size(289, 232);
			this->txt_ListaPoligonos->TabIndex = 40;
			// 
			// comboBoxCO
			// 
			this->comboBoxCO->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxCO->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxCO->FormattingEnabled = true;
			this->comboBoxCO->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Celeste", L"Rojo", L"Amarillo", L"Verde", L"Anaranjado",
					L"Rosado", L"Blanco"
			});
			this->comboBoxCO->Location = System::Drawing::Point(291, 239);
			this->comboBoxCO->Name = L"comboBoxCO";
			this->comboBoxCO->Size = System::Drawing::Size(90, 26);
			this->comboBoxCO->TabIndex = 66;
			this->comboBoxCO->Visible = false;
			// 
			// radioButtonT
			// 
			this->radioButtonT->AutoSize = true;
			this->radioButtonT->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButtonT->Location = System::Drawing::Point(52, 49);
			this->radioButtonT->Name = L"radioButtonT";
			this->radioButtonT->Size = System::Drawing::Size(169, 24);
			this->radioButtonT->TabIndex = 41;
			this->radioButtonT->TabStop = true;
			this->radioButtonT->Text = L"Triangolo (Isóceles)";
			this->radioButtonT->UseVisualStyleBackColor = true;
			this->radioButtonT->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButtonT_CheckedChanged);
			// 
			// labelC
			// 
			this->labelC->AutoSize = true;
			this->labelC->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelC->Location = System::Drawing::Point(233, 242);
			this->labelC->Name = L"labelC";
			this->labelC->Size = System::Drawing::Size(49, 20);
			this->labelC->TabIndex = 65;
			this->labelC->Text = L"Color";
			this->labelC->Visible = false;
			// 
			// radioButtonC
			// 
			this->radioButtonC->AutoSize = true;
			this->radioButtonC->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButtonC->Location = System::Drawing::Point(52, 80);
			this->radioButtonC->Name = L"radioButtonC";
			this->radioButtonC->Size = System::Drawing::Size(106, 24);
			this->radioButtonC->TabIndex = 42;
			this->radioButtonC->TabStop = true;
			this->radioButtonC->Text = L"Cuadrado";
			this->radioButtonC->UseVisualStyleBackColor = true;
			this->radioButtonC->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButtonC_CheckedChanged);
			// 
			// radioButtonR
			// 
			this->radioButtonR->AutoSize = true;
			this->radioButtonR->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButtonR->Location = System::Drawing::Point(52, 111);
			this->radioButtonR->Name = L"radioButtonR";
			this->radioButtonR->Size = System::Drawing::Size(115, 24);
			this->radioButtonR->TabIndex = 43;
			this->radioButtonR->TabStop = true;
			this->radioButtonR->Text = L"Rectangulo";
			this->radioButtonR->UseVisualStyleBackColor = true;
			this->radioButtonR->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButtonR_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(237, 277);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 32);
			this->button2->TabIndex = 63;
			this->button2->Text = L"Agregar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(48, 163);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 20);
			this->label1->TabIndex = 50;
			this->label1->Text = L"Lado 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(48, 201);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 20);
			this->label2->TabIndex = 51;
			this->label2->Text = L"Lado 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(48, 240);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 20);
			this->label3->TabIndex = 52;
			this->label3->Text = L"Lado 3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(48, 283);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 20);
			this->label4->TabIndex = 53;
			this->label4->Text = L"Lado 4";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(121, 239);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(90, 22);
			this->textBox3->TabIndex = 58;
			// 
			// labelB
			// 
			this->labelB->AutoSize = true;
			this->labelB->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelB->Location = System::Drawing::Point(232, 163);
			this->labelB->Name = L"labelB";
			this->labelB->Size = System::Drawing::Size(44, 20);
			this->labelB->TabIndex = 54;
			this->labelB->Text = L"Base";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(121, 200);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(90, 22);
			this->textBox2->TabIndex = 57;
			// 
			// labelA
			// 
			this->labelA->AutoSize = true;
			this->labelA->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelA->Location = System::Drawing::Point(232, 202);
			this->labelA->Name = L"labelA";
			this->labelA->Size = System::Drawing::Size(52, 20);
			this->labelA->TabIndex = 55;
			this->labelA->Text = L"Altura";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(121, 162);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(90, 22);
			this->textBox1->TabIndex = 56;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(801, 683);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void radioButtonT_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButtonT->Checked == true)
	{
		textBox1->Visible = true;
		textBox2->Visible = true;
		textBox3->Visible = true;
		textBoxA->Visible = true;
		textBoxB->Visible = true;
		label1->Visible = true;
		label2->Visible = true;
		label3->Visible = true;
		labelA->Visible = true;
		labelB->Visible = true;
		labelC->Visible = true;
		comboBoxCO->Visible = true;
	}
	else
	{
		textBox1->Visible = false;
		textBox2->Visible = false;
		textBox3->Visible = false;
		textBoxA->Visible = false;
		textBoxB->Visible = false;
		label1->Visible = false;
		label2->Visible = false;
		label3->Visible = false;
		labelA->Visible = false;
		labelB->Visible = false;
		labelC->Visible = false;
		comboBoxCO->Visible = false;
	}
}


private: System::Void radioButtonC_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButtonC->Checked == true)
	{
		textBox1->Visible = true;
		textBox2->Visible = true;
		label1->Visible = true;
		label2->Visible = true;
		textBox3->Visible = true;
		textBox4->Visible = true;
		label3->Visible = true;
		label4->Visible = true;
		labelC->Visible = true;
		comboBoxCO->Visible = true;

	}
	else
	{
		textBox1->Visible = false;
		textBox2->Visible = false;
		label1->Visible = false;
		label2->Visible = false;
		textBox3->Visible = false;
		textBox4->Visible = false;
		label3->Visible = false;
		label4->Visible = false;
		labelC->Visible = false;
		comboBoxCO->Visible = false;
	}
}


private: System::Void radioButtonR_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButtonR->Checked == true)
	{
		textBox1->Visible = true;
		textBox2->Visible = true;
		label1->Visible = true;
		label2->Visible = true;
		textBox3->Visible = true;
		textBox4->Visible = true;
		label3->Visible = true;
		label4->Visible = true;
		labelB->Visible = true;
		labelA->Visible = true;
		textBoxB->Visible = true;
		textBoxA->Visible = true;
		labelC->Visible = true;
		comboBoxCO->Visible = true;
	}
	else
	{
		textBox1->Visible = false;
		textBox2->Visible = false;
		label1->Visible = false;
		label2->Visible = false;
		textBox3->Visible = false;
		textBox4->Visible = false;
		label3->Visible = false;
		label4->Visible = false;
		labelB->Visible = false;
		labelA->Visible = false;
		textBoxB->Visible = false;
		textBoxA->Visible = false;
		labelC->Visible = false;
		comboBoxCO->Visible = false;
	}
}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int lad1, lad2, lad3, lad4, lad5, lad6, lad7, lad8;
	int area, perimetro;
	std::string color;

	try
	{
		if (radioButtonT->Checked == true && comboBoxCO->Text != "")
		{
			int areatriangulo, perimetrotriangulo, basetri, altruratri;

			lad1 = Convert::ToInt32(textBox1->Text);
			lad2 = Convert::ToInt32(textBox2->Text);
			lad3 = Convert::ToInt32(textBox3->Text);
			basetri = Convert::ToInt32(textBoxB->Text);
			altruratri = Convert::ToInt32(textBoxA->Text);
			perimetrotriangulo = lad1 + lad2 + lad3;
			areatriangulo = (basetri * altruratri) / 2;

			for (size_t i = 0; i < comboBoxCO->Text->Length; i++)
			{
				color += comboBoxCO->Text[i];
			}

			poligonos.agregar(perimetrotriangulo, areatriangulo, color, "Triangulo");
		}
		else if (radioButtonC->Checked == true && comboBoxCO->Text != "")
		{
			lad1 = Convert::ToInt32(textBox1->Text);
			lad2 = Convert::ToInt32(textBox2->Text);
			lad3 = Convert::ToInt32(textBox3->Text);
			lad4 = Convert::ToInt32(textBox4->Text);
			perimetro = lad1 + lad2 + lad3 + lad4;
			area = lad1 * lad1;

			for (size_t i = 0; i < comboBoxCO->Text->Length; i++)
			{
				color += comboBoxCO->Text[i];
			}

			poligonos.agregar(perimetro, area, color, "Cuadrado");
		}
		else if (radioButtonR->Checked == true && comboBoxCO->Text != "")
		{

			lad1 = Convert::ToInt32(textBox1->Text);
			lad2 = Convert::ToInt32(textBox2->Text);
			lad3 = Convert::ToInt32(textBox3->Text);
			lad4 = Convert::ToInt32(textBox4->Text);
			int base = Convert::ToInt32(textBoxB->Text);
			int altura = Convert::ToInt32(textBoxA->Text);
			perimetro = lad1 + lad2 + lad3 + lad4;
			area = base * altura;

			for (size_t i = 0; i < comboBoxCO->Text->Length; i++)
			{
				color += comboBoxCO->Text[i];
			}

			poligonos.agregar(perimetro, area, color, "Rectangulo");
		}


		else
		{
			MessageBox::Show("Ingrese los datos correspondientes he ingrese solo numeros enteros");
		}

		textBox1->Text = ""; textBox2->Text = "";	textBox3->Text = ""; textBox4->Text = "";
		textBoxB->Text = ""; textBoxA->Text = ""; comboBoxCO->Text = "";
		comboBoxCO->SelectedText == "";
	}
	catch (...)
	{
		MessageBox::Show("Ingrese los datos correspondientes he ingrese solo numeros enteros");
		textBox1->Text = ""; textBox2->Text = "";	textBox3->Text = ""; textBox4->Text = "";
		textBoxB->Text = ""; textBoxA->Text = ""; comboBoxCO->Text = "";
		comboBoxCO->SelectedText == "";
	}
}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	txt_ListaPoligonos->Text = gcnew String(poligonos.mostrar().c_str());
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int Codigo, posicion = 0;
	Codigo = Convert::ToInt32(txt_BuscarID->Text);

	string Buscar = "";
	Buscar = poligonos.buscar(Codigo);


	if (Buscar != "NO")
	{
		string ID = "", Tipo = "", Area = "", Perimetro = "", Color = "";

		for (size_t i = 0; i < Buscar.length(); i++)
		{
			//Validacion de espacio al inicio
			if (Buscar[i] == ',')
			{
				posicion++;
			}
			else if (posicion == 0)
			{
				ID += Buscar[i];
			}
			else if (posicion == 1)
			{
				Tipo += Buscar[i];
			}
			else if (posicion == 2)
			{
				Perimetro += Buscar[i];
			}
			else if (posicion == 3)
			{
				Area += Buscar[i];
			}
			else if (posicion == 4)
			{
				Color += Buscar[i];
			}
		}
		lbl_IDPoligono->Text = gcnew String(ID.c_str());
		lbl_TipoPoligono->Text = gcnew String(Tipo.c_str());
		lbl_Area->Text = gcnew String(Area.c_str());
		lbl_Perimetro->Text = gcnew String(Perimetro.c_str());
		lbl_Color->Text = gcnew String(Color.c_str());

		if (Color == "Celeste")
		{
			groupBox1->BackColor = System::Drawing::Color::Cyan;
		}
		if (Color == "Rojo")
		{
			groupBox1->BackColor = System::Drawing::Color::Red;
		}
		if (Color == "Amarillo")
		{
			groupBox1->BackColor = System::Drawing::Color::LightYellow;
		}
		if (Color == "Verde")
		{
			groupBox1->BackColor = System::Drawing::Color::GreenYellow;
		}
		if (Color == "Anaranjado")
		{
			groupBox1->BackColor = System::Drawing::Color::Orange;
		}
		if (Color == "Rosado")
		{
			groupBox1->BackColor = System::Drawing::Color::DeepPink;
		}
		if (Color == "Blanco")
		{
			groupBox1->BackColor = System::Drawing::Color::White;
		}
	}
	else
	{
		MessageBox::Show("No se encontro ningun poligono con el ID indicado");
		txt_BuscarID->Text = "";
	}
	txt_BuscarID->Text = "";
}
};
}
