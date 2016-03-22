#pragma once
#include<iostream>
#include<Windows.h>
#include<mmsystem.h>

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

	protected:

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;



	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Vista::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::DarkOrange;
			this->textBox1->Location = System::Drawing::Point(19, 97);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(270, 32);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Orange;
			this->textBox2->Location = System::Drawing::Point(19, 205);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(270, 32);
			this->textBox2->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(15, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(261, 85);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Vista::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(6, 35);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(302, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(19, 146);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(270, 53);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->groupBox1->Controls->Add(this->pictureBox5);
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(320, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(317, 369);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Crea una nueva cuenta";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(6, 277);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(305, 82);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 10;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Vista::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(12, 109);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(230, 197);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(26, 338);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(96, 63);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 12;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Vista::pictureBox6_Click);
			// 
			// Vista
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(668, 404);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Vista";
			this->Text = L"Nueva cuenta";
			this->Load += gcnew System::EventHandler(this, &Vista::Vista_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);

		}

		//Subrutina para quitar espacios
		String^ quitarEspacios(String^ Cadena){
			int i = 0;
			while (i < Cadena->Length)
			{
				if (Cadena->Substring(i, 1)->Equals(" "))
				{
					Cadena = Cadena->Substring(0, i) + Cadena->Substring(i + 1, (Cadena->Length - (i + 1)));
				}
				else
				{
					i++;
				}
				
			}
			return Cadena;
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
			String^ Name = textBox1->Text;
			String^ Pass = textBox2->Text;
			Name = quitarEspacios(Name);
			Pass = quitarEspacios(Pass);
	

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
						MessageBox::Show("Por conveniencia se ha removido los espacios que tenia su contraseña");
						nombreValido(Name, Pass);
					}
				}
			}
		}


#pragma endregion
	private: System::Void Vista_Load(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("login.wav"), NULL, SND_ASYNC);
	}


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
}
		 private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
					  verificarLogin();
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Stop pressing this button.");
}
};
}
