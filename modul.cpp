//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
<<<<<<< .mine#include "About.h"
=======>>>>>>> .theirs#include "modul.h"
#include "modulform2.h"
#include "aboutprogramm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tarticlebase *articlebase;
//---------------------------------------------------------------------------
__fastcall Tarticlebase::Tarticlebase(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------




<<<<<<< .mine
void __fastcall TForm5::About1Click(TObject *Sender)
{
	AboutForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Button5Click(TObject *Sender)
{
	// �������� ��������� ������ ��������� / ������ * �����
	// ����� ������ ����� �� ������� ������
	// ����� �������:  ( ( ( �������������������� / ������ ) * ����� ) +  ... + ... + ... ) * ����
   double totalPrice = 0; // �������� ���������
   double SverloPrice = 0; //TODO ��������� ������ ������
   double RabotaPrice = 0; //TODO ��������� ������ ������
   double RatePrice = 0; //TODO ���� ����

}
//---------------------------------------------------------------------------

=======void __fastcall Tarticlebase::N4Click(TObject *Sender)
{
	warehouse->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tarticlebase::N2Click(TObject *Sender)
{
	about->Show();
}
//---------------------------------------------------------------------------


>>>>>>> .theirs