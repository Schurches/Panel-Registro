#pragma once

namespace PanelsitoLogin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de Vista
	/// </summary>
	public ref class Vista : public System::Windows::Forms::Form
	{
	public:
		Vista(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Vista()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(90, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registro";
			this->label1->Click += gcnew System::EventHandler(this, &Vista::label1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 202);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(231, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Verificar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Vista::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(114, 100);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(114, 149);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 103);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label2->Size = System::Drawing::Size(96, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nombre de usuario";
			this->label2->Click += gcnew System::EventHandler(this, &Vista::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Contraseña";
			this->label3->Click += gcnew System::EventHandler(this, &Vista::label3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 272);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 33);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Volver al Login";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Vista
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(271, 317);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Vista";
			this->Text = L"Vista";
			this->Load += gcnew System::EventHandler(this, &Vista::Vista_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//Hallando la posicion de las Comas para saber el tamaño del nombre de usuario
		int HallarComas(String^Palabra){
			int i = 0;
			while (i < Palabra->Length)
			{
				if (Palabra->Substring(i,1)->Equals(","))
				{
					return i;
				}
				i++;
			}
			return 0;
		}

		//El nombre fue valido. Creando nuevo usuario..
		void nuevoUsuario(String^Nombre, String^Contras, String^ Ruta){
			String^Linea;
			String^Name;
			String^Pass;
			int sw = 0;
			int Tama = 0;
			//Abriendo en modo lectura
			StreamReader^ Archivo1 = gcnew StreamReader(Ruta);
			while ((Archivo1->Peek() != -1) && (sw == 0)) //Mientras que la linea no este vacia
			{
				Linea = Archivo1->ReadLine();
				Tama = HallarComas(Linea);
				Name = Linea->Substring(0, Tama);
				//	Pass = Linea->Substring(Tam + 1, (Linea->Length - (Tam + 1)));
				if (Nombre->Equals(Name))
				{
					sw = 1;
				}
			}
			Archivo1->Close();
			if (sw==1)
			{
				MessageBox::Show("Este nombre ya existe");
			}
			else
			{
				//Abriendo en modo escritura
				StreamWriter^ Archivo = gcnew StreamWriter(Ruta, true);
				Archivo->WriteLine(Nombre+","+Contras);
				Archivo->Close();
			}
		}


		//Validando que el nombre sea valido
		void nombreValido(String^ UserName, String^Password){
			//Si la casilla esta en blanco
			if (UserName->Length <= 0)
			{
				MessageBox::Show("Debes definir un nombre de usuario");
			}
			else
			{
				//Si la casilla excede el tamaño permitido
				if (UserName->Length > 8)
				{
					MessageBox::Show("El nombre de usuario no puede exceder 8 caracteres");
				}
				else
				{
					//Validando caracteres especiales
					int i = 0, Tam = UserName->Length, Tam2 = Password->Length;
					char Letra = Convert::ToChar(UserName->Substring(i, 1));
					//Verificando por valor ASCII. Si es una letra en mayuscula o miniscula.
					while ((i < Tam) && ((Letra >= 65 && Letra <= 95) || (Letra >= 97 && Letra <= 122)||(Letra >= 48 && Letra <= 57)))
					{
						i++;
						if (i <= 5)
						{
							Letra = Convert::ToChar(UserName->Substring(i, 1));
						}
					}
					//Si el While se cumple, el nombre es valido pues el valor de "i" es igual al tamaño del nombre
					if (i==Tam)
					{
						nuevoUsuario(UserName,Password,"Lista de Usuarios.txt");
					}
					else
				    //Si el While no se completa, es porque encontro un caracter especial. 
					{
						MessageBox::Show("El nombre no puede contener caracteres especiales");
					}
					


					//
				}
			}
		}


		//Verificacion dependiendo de condiciones
		void verificarLogin(){
			String^Name = textBox1->Text;
			String^Pass = textBox2->Text;
			if ((Pass->Length <= 0) && (Name->Length <= 0))
			{
				MessageBox::Show("No puedes dejar ningun campo vacio");
			}
			else
			{
				if (Pass->Length <= 0)
				{
					MessageBox::Show("Tienes que digitar una contraseña");
				}
				else
				{
					if (Name->Length <= 0)
					{
						MessageBox::Show("Debes digitar un nombre");
					}
					else
					{
						nombreValido(Name, Pass);
					}
				}
			}
			MessageBox::Show("Hola");
		}
#pragma endregion
	private: System::Void Vista_Load(System::Object^  sender, System::EventArgs^  e) {
				 String^T = "Astrobix,awaker2130";
				 int M = HallarComas(T);
				 MessageBox::Show(T->Substring(0,M));
				 MessageBox::Show(T->Substring(M+1,(T->Length-(M+1))));
		//		 StreamWriter^ File = gcnew StreamWriter("Lista De Usuarios", true);
		//		 File->WriteLine("Astrobix,awaker2130");
				 
	}


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 verificarLogin();

}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
