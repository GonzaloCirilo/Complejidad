#pragma once

#include <vector>
#include <algorithm>
#include <conio.h>
#include "Mapa.h"
typedef std::pair<int, int>ii;
typedef std::pair<int, ii>iii;
ii choice;
namespace TP_Complejidad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Reinas
	/// </summary>
	public ref class Reinas : public System::Windows::Forms::Form
	{
	public:
		Reinas(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Graphics^g;
	private: System::Windows::Forms::Timer^  tjuego;
	private: System::Windows::Forms::PictureBox^  pcbReinanegra;
	private: System::Windows::Forms::PictureBox^  pcbReinablanca;
	public:
		Bitmap^tablero;
		Bitmap^reinaB;
		Bitmap^reinaN;
		Bitmap^bscore;
		Bitmap^bscoreia;
		Bitmap^casillas;
		Bitmap^brollbacks;
		Bitmap^btiempo;
		Bitmap^bturno;
		Bitmap^bBN;
		Bitmap^bnumeros;
		Bitmap^titulo;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	public:
	private: System::Windows::Forms::ToolStripMenuItem^  opcionesToolStripMenuItem;




	private: System::Windows::Forms::PictureBox^  pcbScore;
	private: System::Windows::Forms::PictureBox^  pcbNumeros;

	private: System::Windows::Forms::PictureBox^  pcbBN;

	private: System::Windows::Forms::PictureBox^  pcbTurno;

	private: System::Windows::Forms::PictureBox^  pcbTiempo;

	private: System::Windows::Forms::PictureBox^  pcbRollbacks;

	private: System::Windows::Forms::PictureBox^  pcbCasillas;

	private: System::Windows::Forms::PictureBox^  pcbScoreia;
	private: System::Windows::Forms::ToolStripMenuItem^  reiniciarToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ayudaToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pcbTitulo;

			 Mapa *objMapa;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Reinas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pcbTablero;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Reinas::typeid));
			this->pcbTablero = (gcnew System::Windows::Forms::PictureBox());
			this->tjuego = (gcnew System::Windows::Forms::Timer(this->components));
			this->pcbReinanegra = (gcnew System::Windows::Forms::PictureBox());
			this->pcbReinablanca = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->opcionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reiniciarToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pcbScore = (gcnew System::Windows::Forms::PictureBox());
			this->pcbNumeros = (gcnew System::Windows::Forms::PictureBox());
			this->pcbBN = (gcnew System::Windows::Forms::PictureBox());
			this->pcbTurno = (gcnew System::Windows::Forms::PictureBox());
			this->pcbTiempo = (gcnew System::Windows::Forms::PictureBox());
			this->pcbRollbacks = (gcnew System::Windows::Forms::PictureBox());
			this->pcbCasillas = (gcnew System::Windows::Forms::PictureBox());
			this->pcbScoreia = (gcnew System::Windows::Forms::PictureBox());
			this->pcbTitulo = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbTablero))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbReinanegra))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbReinablanca))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbScore))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbNumeros))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbBN))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbTurno))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbTiempo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbRollbacks))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbCasillas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbScoreia))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbTitulo))->BeginInit();
			this->SuspendLayout();
			// 
			// pcbTablero
			// 
			this->pcbTablero->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcbTablero.Image")));
			this->pcbTablero->Location = System::Drawing::Point(54, 62);
			this->pcbTablero->Name = L"pcbTablero";
			this->pcbTablero->Size = System::Drawing::Size(1500, 1500);
			this->pcbTablero->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pcbTablero->TabIndex = 0;
			this->pcbTablero->TabStop = false;
			this->pcbTablero->Visible = false;
			// 
			// tjuego
			// 
			this->tjuego->Tick += gcnew System::EventHandler(this, &Reinas::tjuego_Tick);
			// 
			// pcbReinanegra
			// 
			this->pcbReinanegra->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcbReinanegra.Image")));
			this->pcbReinanegra->Location = System::Drawing::Point(289, 82);
			this->pcbReinanegra->Name = L"pcbReinanegra";
			this->pcbReinanegra->Size = System::Drawing::Size(150, 150);
			this->pcbReinanegra->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pcbReinanegra->TabIndex = 1;
			this->pcbReinanegra->TabStop = false;
			this->pcbReinanegra->Visible = false;
			// 
			// pcbReinablanca
			// 
			this->pcbReinablanca->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcbReinablanca.Image")));
			this->pcbReinablanca->Location = System::Drawing::Point(115, 82);
			this->pcbReinablanca->Name = L"pcbReinablanca";
			this->pcbReinablanca->Size = System::Drawing::Size(150, 150);
			this->pcbReinablanca->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pcbReinablanca->TabIndex = 2;
			this->pcbReinablanca->TabStop = false;
			this->pcbReinablanca->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->opcionesToolStripMenuItem,
					this->reiniciarToolStripMenuItem1, this->salirToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(824, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// opcionesToolStripMenuItem
			// 
			this->opcionesToolStripMenuItem->Name = L"opcionesToolStripMenuItem";
			this->opcionesToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->opcionesToolStripMenuItem->Text = L"Rollback";
			this->opcionesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Reinas::opcionesToolStripMenuItem_Click);
			// 
			// reiniciarToolStripMenuItem1
			// 
			this->reiniciarToolStripMenuItem1->Name = L"reiniciarToolStripMenuItem1";
			this->reiniciarToolStripMenuItem1->Size = System::Drawing::Size(64, 20);
			this->reiniciarToolStripMenuItem1->Text = L"Reiniciar";
			this->reiniciarToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Reinas::reiniciarToolStripMenuItem1_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(41, 20);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &Reinas::salirToolStripMenuItem_Click_1);
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			this->ayudaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Reinas::ayudaToolStripMenuItem_Click);
			// 
			// pcbScore
			// 
			this->pcbScore->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcbScore.Image")));
			this->pcbScore->Location = System::Drawing::Point(380, 40);
			this->pcbScore->Name = L"pcbScore";
			this->pcbScore->Size = System::Drawing::Size(108, 16);
			this->pcbScore->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pcbScore->TabIndex = 5;
			this->pcbScore->TabStop = false;
			this->pcbScore->Visible = false;
			// 
			// pcbNumeros
			// 
			this->pcbNumeros->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcbNumeros.Image")));
			this->pcbNumeros->Location = System::Drawing::Point(342, 277);
			this->pcbNumeros->Name = L"pcbNumeros";
			this->pcbNumeros->Size = System::Drawing::Size(171, 17);
			this->pcbNumeros->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pcbNumeros->TabIndex = 6;
			this->pcbNumeros->TabStop = false;
			this->pcbNumeros->Visible = false;
			// 
			// pcbBN
			// 
			this->pcbBN->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcbBN.Image")));
			this->pcbBN->Location = System::Drawing::Point(350, 283);
			this->pcbBN->Name = L"pcbBN";
			this->pcbBN->Size = System::Drawing::Size(234, 16);
			this->pcbBN->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pcbBN->TabIndex = 7;
			this->pcbBN->TabStop = false;
			this->pcbBN->Visible = false;
			// 
			// pcbTurno
			// 
			this->pcbTurno->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcbTurno.Image")));
			this->pcbTurno->Location = System::Drawing::Point(407, 182);
			this->pcbTurno->Name = L"pcbTurno";
			this->pcbTurno->Size = System::Drawing::Size(108, 16);
			this->pcbTurno->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pcbTurno->TabIndex = 8;
			this->pcbTurno->TabStop = false;
			this->pcbTurno->Visible = false;
			// 
			// pcbTiempo
			// 
			this->pcbTiempo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcbTiempo.Image")));
			this->pcbTiempo->Location = System::Drawing::Point(525, 116);
			this->pcbTiempo->Name = L"pcbTiempo";
			this->pcbTiempo->Size = System::Drawing::Size(126, 16);
			this->pcbTiempo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pcbTiempo->TabIndex = 9;
			this->pcbTiempo->TabStop = false;
			this->pcbTiempo->Visible = false;
			// 
			// pcbRollbacks
			// 
			this->pcbRollbacks->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcbRollbacks.Image")));
			this->pcbRollbacks->Location = System::Drawing::Point(544, 294);
			this->pcbRollbacks->Name = L"pcbRollbacks";
			this->pcbRollbacks->Size = System::Drawing::Size(180, 16);
			this->pcbRollbacks->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pcbRollbacks->TabIndex = 10;
			this->pcbRollbacks->TabStop = false;
			this->pcbRollbacks->Visible = false;
			// 
			// pcbCasillas
			// 
			this->pcbCasillas->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcbCasillas.Image")));
			this->pcbCasillas->Location = System::Drawing::Point(544, 238);
			this->pcbCasillas->Name = L"pcbCasillas";
			this->pcbCasillas->Size = System::Drawing::Size(216, 32);
			this->pcbCasillas->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pcbCasillas->TabIndex = 11;
			this->pcbCasillas->TabStop = false;
			this->pcbCasillas->Visible = false;
			// 
			// pcbScoreia
			// 
			this->pcbScoreia->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcbScoreia.Image")));
			this->pcbScoreia->Location = System::Drawing::Point(544, 182);
			this->pcbScoreia->Name = L"pcbScoreia";
			this->pcbScoreia->Size = System::Drawing::Size(162, 16);
			this->pcbScoreia->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pcbScoreia->TabIndex = 12;
			this->pcbScoreia->TabStop = false;
			this->pcbScoreia->Visible = false;
			// 
			// pcbTitulo
			// 
			this->pcbTitulo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcbTitulo.Image")));
			this->pcbTitulo->Location = System::Drawing::Point(511, 0);
			this->pcbTitulo->Name = L"pcbTitulo";
			this->pcbTitulo->Size = System::Drawing::Size(313, 92);
			this->pcbTitulo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pcbTitulo->TabIndex = 13;
			this->pcbTitulo->TabStop = false;
			this->pcbTitulo->Visible = false;
			// 
			// Reinas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(824, 601);
			this->Controls->Add(this->pcbTitulo);
			this->Controls->Add(this->pcbScoreia);
			this->Controls->Add(this->pcbCasillas);
			this->Controls->Add(this->pcbRollbacks);
			this->Controls->Add(this->pcbTiempo);
			this->Controls->Add(this->pcbTurno);
			this->Controls->Add(this->pcbBN);
			this->Controls->Add(this->pcbNumeros);
			this->Controls->Add(this->pcbScore);
			this->Controls->Add(this->pcbReinablanca);
			this->Controls->Add(this->pcbReinanegra);
			this->Controls->Add(this->pcbTablero);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(840, 640);
			this->MinimumSize = System::Drawing::Size(840, 640);
			this->Name = L"Reinas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Reinas";
			this->Load += gcnew System::EventHandler(this, &Reinas::Reinas_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Reinas::shortcuts);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Reinas::selectpos);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbTablero))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbReinanegra))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbReinablanca))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbScore))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbNumeros))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbBN))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbTurno))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbTiempo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbRollbacks))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbCasillas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbScoreia))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbTitulo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool help;
		float tiempo;
		int d;
		int const maxdepht =8;
		bool turnojug;
		std::vector<std::vector<int>> *posiciones;
		int scoreIA, scoreJugador, scorebak,scorebakIA;
		bool primer;
		int intentos;
		Random r;
	private: void Iniciar() {
		help = false;
		d = 0;
		primer = true;
		objMapa = new Mapa();
		bool a = (r.Next(0, 3) == 1);
		turnojug = a?true:false;
		posiciones = new std::vector<std::vector<int>>();
		scoreIA = 0;
		scoreJugador = 0;
		intentos = 0;
		tjuego->Start();
		ayudaToolStripMenuItem->Enabled = false;
		opcionesToolStripMenuItem->Enabled = false;
		tiempo = 30;
	}
	private: System::Void Reinas_Load(System::Object^  sender, System::EventArgs^  e) {
		Iniciar();
		this->Width = 655; this->Height = 640;
		this->MaximizeBox = false;
		titulo = gcnew Bitmap(this->pcbTitulo->Image);
		titulo->MakeTransparent(titulo->GetPixel(0, 0));
		tablero = gcnew Bitmap(this->pcbTablero->Image,600,600);
		reinaB = gcnew Bitmap(this->pcbReinablanca->Image,60,60);
		reinaB->MakeTransparent(reinaB->GetPixel(1, 1));
		reinaB->MakeTransparent(reinaB->GetPixel(0, 0));
		reinaN = gcnew Bitmap(this->pcbReinanegra->Image,60,60);
		reinaN->MakeTransparent(reinaN->GetPixel(1, 1));
		reinaN->MakeTransparent(reinaN->GetPixel(0, 0));
		bscore = gcnew Bitmap(this->pcbScore->Image);
		bscore->MakeTransparent(bscore->GetPixel(1, 1));
		bscoreia = gcnew Bitmap(this->pcbScoreia->Image);
		bscoreia->MakeTransparent(bscoreia->GetPixel(1, 1));
		casillas = gcnew Bitmap(this->pcbCasillas->Image);
		casillas->MakeTransparent(casillas->GetPixel(1, 1));
		brollbacks = gcnew Bitmap(this->pcbRollbacks->Image);
		brollbacks->MakeTransparent(brollbacks->GetPixel(1, 1));
		btiempo = gcnew Bitmap(this->pcbTiempo->Image);
		btiempo->MakeTransparent(btiempo->GetPixel(1, 1));
		bturno = gcnew Bitmap(this->pcbTurno->Image);
		bturno->MakeTransparent(bturno->GetPixel(1, 1));
		bBN = gcnew Bitmap(this->pcbBN->Image);
		bBN->MakeTransparent(bBN->GetPixel(1, 1));
		bnumeros = gcnew Bitmap(this->pcbNumeros->Image);
		bnumeros->MakeTransparent(bnumeros->GetPixel(1, 1));
		
		
	}
	void pintarnumero(int x, int y, int num, BufferedGraphics^ &buffer) {
				 int cifras = (num/10)+1;
				 cifras = cifras == 1 ? 1 : 2;
				 for (int i = 0; i < cifras; i++) {
					 int act = (num % 10)-1;
					 act = act == -1 ? 9 : act;
					 Rectangle porcion =  Rectangle(17*act, 17*0, 17, 17);
					 buffer->Graphics->DrawImage(bnumeros, x+(17*cifras)-(17*i), y,porcion,GraphicsUnit::Pixel);
					 num /= 10;
				 }
			 }
	//Funcion para puntajes
	void pintaresumen(BufferedGraphics^ &buffer) {
		int q = opcionesToolStripMenuItem->Enabled || primer ? 1 : 0;
		buffer->Graphics->DrawImage(titulo, 645, 30, 100, 50);
		buffer->Graphics->DrawImage(bscore, 605, 100); pintarnumero(605, 120, scoreJugador, buffer);
		buffer->Graphics->DrawImage(bscoreia, 605, 150); pintarnumero(605, 170, scoreIA, buffer);
		buffer->Graphics->DrawImage(casillas, 605, 200); pintarnumero(605, 240, getCasillasDisponibles(objMapa->mapa), buffer);
		buffer->Graphics->DrawImage(brollbacks, 605, 266); pintarnumero(605, 286, q, buffer);
		buffer->Graphics->DrawImage(btiempo, 605, 316); pintarnumero(605, 336, (int)tiempo, buffer);
		buffer->Graphics->DrawImage(bturno, 605, 366); Rectangle porcion = Rectangle((turnojug == 1 ? 0 : 127), 0, (turnojug == 1 ? 127 : 107), 17); buffer->Graphics->DrawImage(bBN, 605 + 17, 386, porcion, GraphicsUnit::Pixel);

	}
	void moverIA() {
		if (turnojug == false) {
			if (d == 0 || d == 1) {
				int c = 1000;
				for (int j = 0; j < 8; j++) {
					for (int i = 0; i < 8; i++) {
						if (validacion(i, j, posiciones)) {
							objMapa->InsertarIA(i, j);
							posiciones->push_back({ i, j });
							auto l = getCasillasDisponibles(objMapa->mapa) < c;
							auto r = validacion(i, j, posiciones);
							if (getCasillasDisponibles(objMapa->mapa) < c) {
								c = getCasillasDisponibles(objMapa->mapa);
								choice = { i,j };
							}
							posiciones->pop_back();
							objMapa->Eliminarficha(i, j);
						}
					}
				}
				objMapa->InsertarIA(choice.first, choice.second);
				posiciones->push_back({ choice.first,choice.second });
				d++;
				scoreIA += 10;
				turnojug = true;
				return;
			}
			else {
				//vx = new std::vector<std::vector<int>>();
				auto s = choice;
				int min = -10000, max = 10000;
				iii aux = minimax(-1, d, min, max);
				choice = aux.second;
				if (!validacion(choice.first, choice.second, posiciones)) {
					tjuego->Stop();
					MessageBox::Show("Ha perdido Negras: sin Movimientos");

				}
				else {
					objMapa->InsertarIA(choice.first, choice.second);
					posiciones->push_back({ choice.first,choice.second });
					scorebakIA = scoreIA;
					scoreIA += 10;
					d++;
				}
				turnojug = true;
			}
		}
		else {
			if (getCasillasDisponibles(objMapa->mapa) == 0) {
				tjuego->Stop();
				MessageBox::Show("Ha perdido Blancas: sin movimientos");

			}
		}
	}
	private: System::Void tjuego_Tick(System::Object^  sender, System::EventArgs^  e) {
		g = this->CreateGraphics();
		int gWidth = (int)g->VisibleClipBounds.Width;
		int gHeigth = (int)g->VisibleClipBounds.Height;
		BufferedGraphicsContext ^espacioBuffer = BufferedGraphicsManager::Current;
		espacioBuffer->MaximumBuffer = System::Drawing::Size(gWidth + 1, gHeigth + 1);
		BufferedGraphics ^buffer = espacioBuffer->Allocate(g, Drawing::Rectangle(0, 0, gWidth, gHeigth));
		buffer->Graphics->FillRectangle(Brushes::LimeGreen, Rectangle(0, 0, gWidth, gHeigth));
		buffer->Graphics->DrawImage(tablero,0,0);
		PintarMatriz(buffer);
		pintaresumen(buffer);
		buffer->Render(g);
		delete g;
		delete buffer;
		tiempo -= 0.1;
		moverIA();
		if (tiempo <= 0.0f) {
			tjuego->Stop();
			MessageBox::Show("Ha perdido:" + (turnojug == 1 ? "blancas" : "negras"));
		}
		
		if (tiempo < 5) {
			ayudaToolStripMenuItem->Enabled = true;
		}
		
	}
	private: void PintarMatriz(BufferedGraphics^ &buffer) {
		int xini = 60; int yini = 60;
		for (int j = 0; j < 8; j++) {
			for (int i = 0; i < 8; i++) {
				
				Color^d;
				Color::FromArgb(127, Color::Blue);
				buffer->Graphics->DrawRectangle(Pens::DarkGray, Rectangle(60*i+xini, 60*j+yini, 60, 60));
				if (help) {
					if (!validacion(i, j, posiciones) && objMapa->RetornarenCoord(i, j) <= 0) {
						buffer->Graphics->FillRectangle(Brushes::Red, Rectangle(60 * i + xini, 60 * j + yini, 60, 60));
					}
				}
				if(objMapa->RetornarenCoord(i,j)==1)
					buffer->Graphics->DrawImage(reinaB, 60 * i + xini, 60 * j + yini);
				if (objMapa->RetornarenCoord(i, j) == 2)
					buffer->Graphics->DrawImage(reinaN, 60 * i + xini, 60 * j + yini);
			}
		}
	}
	private: bool validacion(int x, int y, std::vector<std::vector<int>>*v) {
				 if (v->empty()) {
					 return true;
				 }
				 else {
					 bool aux;
					 for each(auto r in *v) {
						 if (r.at(0) == x || r.at(1) == y || abs(r.at(0) - x) == abs(r.at(1) - y)) {
							 aux = false;
							 break;
						 }
						 else {
							 aux = true;
						 }
					 }
					 return aux;
				 }
			 }
	//movida del jugador
	private: System::Void selectpos(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		int x = e->X;
		int y = e->Y;
		
		if((x<540&&x>60)&&(y<540&&y>60)){
			if (turnojug == true) {
				tiempo = 30;
				x = (x - 60) / 60;
				y = (y - 60) / 60;


				if (validacion(x, y, posiciones)) {
					
					
					posiciones->push_back(std::vector<int>{x, y});
					
					scorebak = scoreJugador;
					scoreJugador += 10;
					objMapa->InsertarJugador(x, y);
					intentos = 0;
					d++;
					turnojug = false;
					help = false;
					ayudaToolStripMenuItem->Enabled = false;
				}
				else {
					scoreJugador -=5;
					intentos++;
				}
				if (intentos == 3)
				{
					MessageBox::Show("Has perdido", "Fin", MessageBoxButtons::OK, MessageBoxIcon::Information);
					Iniciar();
				}
				
				
			}
			
			if(primer)
				opcionesToolStripMenuItem->Enabled = true;
			primer = false;
			
		}
	}
	//Funcion evaludora
	private:int score(int turno,int depth) {
				 if (turno == 1)
					 return -10+depth;
				 else {
					 if (turno == -1)
						 return 10-depth;
				 }
			 }
			
	private: iii minimax(int turno,int depth,int alpha, int beta) {
		//std::vector<iii>*s = new std::vector<iii>();
		if (getCasillasDisponibles(objMapa->mapa) == 0) {
			return{ score(turno*-1,depth),{ choice.first,choice.second } };
		}
		int scores;
		std::pair<int,int>moves;
		ii choi;
		bool broke=false;
		int mayor = -10000, menor = 10000;
		for (int j = 0; j < 8; j++) {
			for (int i = 0; i < 8; i++) {
				if (validacion(i, j, posiciones)) {
					int ini=getCasillasDisponibles(objMapa->mapa);
					posiciones->push_back(std::vector<int>{i, j});
					objMapa->InsertarIA(i, j);
					scores=minimax(turno*-1,depth+1,alpha,beta).first;

					//s->push_back({ scores,{ i,j } });
					if (turno == -1) {
						if (scores > mayor) {
							mayor = scores;
							if (scores >= alpha) {
								alpha = scores;
								choi = { i,j };
							}
						}
					}else{
						if (scores < menor) {
							menor = scores;
							if (scores <= beta) {
								beta = scores;
								choi = { i,j };
							}
						}
					}
					objMapa->Eliminarficha(i, j);
					posiciones->pop_back();
					if(alpha>=beta){
						broke = true;
						break;
					}
				}
				
			}
			if (broke == true)break;
		}
		if (turno == -1) return{ mayor,{choi.first,choi.second} }; else return{ menor, { choi.first,choi.second } };
}
	//Casillas disponibles en el tablero
	private: int getCasillasDisponibles(int mapa[8][8]) {
		int cont = 0;
		for (int j = 0; j < 8; j++) {
			for (int i = 0; i < 8; i++) {
				if (validacion(i, j,posiciones)) {
					cont++;
				}
			}
		}
		return cont;
}
	
	void restart() {
			 tjuego->Stop();
			 Iniciar();
		 }
	private: System::Void reiniciarToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	restart();
}
	void rollback() {
			 if (!tjuego->Enabled)
				 tjuego->Start();
			 objMapa->retornar();
			 //objMapa->retornar();
			 posiciones->pop_back();
			 posiciones->pop_back();
			 d-=2;
			 scoreIA = scorebakIA;
			 scoreJugador = scorebak;
			 int q = opcionesToolStripMenuItem->Enabled || primer ? 1 : 0;
			 opcionesToolStripMenuItem->Enabled = false;
		 }

	private: System::Void opcionesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	rollback();
	}
	private: System::Void salirToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
	}
	private: System::Void ayudaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	help = true;
	}
	private: System::Void shortcuts(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		switch (e->KeyCode) {
			case Keys::B:
				if(opcionesToolStripMenuItem->Enabled)
					rollback();
				break;
			case Keys::R:
				restart();
				break;
			case Keys::H:
				if (ayudaToolStripMenuItem->Enabled)
					help = true;
				break;
			case Keys::S:
				this->Close();
				break;
		}
	}
};
}
