#pragma once

namespace VIEW {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cbbNombres;
	private: System::Windows::Forms::TextBox^ tbNombres;
	private: System::Windows::Forms::Label^ mensaje;
	protected:



	private: System::Windows::Forms::Button^ botonMostrar;

	private: System::Windows::Forms::Button^ botonBorrar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbNum1;
	private: System::Windows::Forms::TextBox^ tbNum2;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbResultado;

	private: System::Windows::Forms::Button^ btnBorrarSuma;
	private: System::Windows::Forms::Button^ btnSumar;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->cbbNombres = (gcnew System::Windows::Forms::ComboBox());
			this->tbNombres = (gcnew System::Windows::Forms::TextBox());
			this->mensaje = (gcnew System::Windows::Forms::Label());
			this->botonMostrar = (gcnew System::Windows::Forms::Button());
			this->botonBorrar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbNum1 = (gcnew System::Windows::Forms::TextBox());
			this->tbNum2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbResultado = (gcnew System::Windows::Forms::TextBox());
			this->btnBorrarSuma = (gcnew System::Windows::Forms::Button());
			this->btnSumar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// cbbNombres
			// 
			this->cbbNombres->FormattingEnabled = true;
			this->cbbNombres->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Jorge", L"Alberto", L"Elias", L"Micaela" });
			this->cbbNombres->Location = System::Drawing::Point(90, 32);
			this->cbbNombres->Name = L"cbbNombres";
			this->cbbNombres->Size = System::Drawing::Size(121, 24);
			this->cbbNombres->TabIndex = 0;
			// 
			// tbNombres
			// 
			this->tbNombres->Location = System::Drawing::Point(90, 87);
			this->tbNombres->Name = L"tbNombres";
			this->tbNombres->Size = System::Drawing::Size(100, 22);
			this->tbNombres->TabIndex = 1;
			// 
			// mensaje
			// 
			this->mensaje->AutoSize = true;
			this->mensaje->Location = System::Drawing::Point(87, 149);
			this->mensaje->Name = L"mensaje";
			this->mensaje->Size = System::Drawing::Size(0, 16);
			this->mensaje->TabIndex = 2;
			this->mensaje->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// botonMostrar
			// 
			this->botonMostrar->Location = System::Drawing::Point(38, 206);
			this->botonMostrar->Name = L"botonMostrar";
			this->botonMostrar->Size = System::Drawing::Size(92, 23);
			this->botonMostrar->TabIndex = 3;
			this->botonMostrar->Text = L"MOSTRAR";
			this->botonMostrar->UseVisualStyleBackColor = true;
			this->botonMostrar->Click += gcnew System::EventHandler(this, &MyForm::botonMostrar_Click);
			// 
			// botonBorrar
			// 
			this->botonBorrar->Location = System::Drawing::Point(151, 206);
			this->botonBorrar->Name = L"botonBorrar";
			this->botonBorrar->Size = System::Drawing::Size(90, 23);
			this->botonBorrar->TabIndex = 4;
			this->botonBorrar->Text = L"BORRAR";
			this->botonBorrar->UseVisualStyleBackColor = true;
			this->botonBorrar->Click += gcnew System::EventHandler(this, &MyForm::botonBorrar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(607, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"SUMADOR";
			// 
			// tbNum1
			// 
			this->tbNum1->Location = System::Drawing::Point(469, 149);
			this->tbNum1->Name = L"tbNum1";
			this->tbNum1->Size = System::Drawing::Size(100, 22);
			this->tbNum1->TabIndex = 6;
			// 
			// tbNum2
			// 
			this->tbNum2->Location = System::Drawing::Point(687, 149);
			this->tbNum2->Name = L"tbNum2";
			this->tbNum2->Size = System::Drawing::Size(100, 22);
			this->tbNum2->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(493, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"NUMERO 1";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(684, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"NUMERO 2";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(606, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"RESULTADO";
			// 
			// tbResultado
			// 
			this->tbResultado->Location = System::Drawing::Point(582, 304);
			this->tbResultado->Name = L"tbResultado";
			this->tbResultado->Size = System::Drawing::Size(100, 22);
			this->tbResultado->TabIndex = 10;
			// 
			// btnBorrarSuma
			// 
			this->btnBorrarSuma->Location = System::Drawing::Point(650, 397);
			this->btnBorrarSuma->Name = L"btnBorrarSuma";
			this->btnBorrarSuma->Size = System::Drawing::Size(90, 23);
			this->btnBorrarSuma->TabIndex = 13;
			this->btnBorrarSuma->Text = L"BORRAR";
			this->btnBorrarSuma->UseVisualStyleBackColor = true;
			this->btnBorrarSuma->Click += gcnew System::EventHandler(this, &MyForm::btnBorrarSuma_Click);
			// 
			// btnSumar
			// 
			this->btnSumar->Location = System::Drawing::Point(537, 397);
			this->btnSumar->Name = L"btnSumar";
			this->btnSumar->Size = System::Drawing::Size(92, 23);
			this->btnSumar->TabIndex = 12;
			this->btnSumar->Text = L"SUMAR";
			this->btnSumar->UseVisualStyleBackColor = true;
			this->btnSumar->Click += gcnew System::EventHandler(this, &MyForm::btnSumar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(927, 591);
			this->Controls->Add(this->btnBorrarSuma);
			this->Controls->Add(this->btnSumar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbResultado);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbNum2);
			this->Controls->Add(this->tbNum1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->botonBorrar);
			this->Controls->Add(this->botonMostrar);
			this->Controls->Add(this->mensaje);
			this->Controls->Add(this->tbNombres);
			this->Controls->Add(this->cbbNombres);
			this->Name = L"MyForm";
			this->Text = L"sumador";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void botonMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tbNombres->Text = this->cbbNombres->Text;
		this->mensaje->Text = "Hola a Todos";
	}
		 
private: System::Void botonBorrar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tbNombres->Text = "";
	this->mensaje->Text = "";
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSumar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->tbResultado->Text = Convert::ToString(Convert::ToInt32(this->tbNum1->Text) + Convert::ToInt32(this->tbNum2->Text));
}
private: System::Void btnBorrarSuma_Click(System::Object^ sender, System::EventArgs^ e) {

	this->tbNum1->Text = " ";
	this->tbNum2->Text = " ";
	this->tbResultado->Text = " ";
}
};
}
