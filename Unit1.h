//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Memo.hpp>
#include <FMX.ScrollBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMemo *Memo1;
	TMemo *Memo2;
	TMemo *Memo3;
	TMemo *Memo4;
	TMemo *Memo5;
	TMemo *Memo6;
	TMemo *Memo7;
	TMemo *Memo8;
	TMemo *Memo9;
	TLabel *Label1;
	TLabel *Label2;
	TButton *Button1;
	TButton *Button2;
	TLabel *Label3;
	TLabel *Label4;
	void __fastcall Memo1Click(TObject *Sender);
	void __fastcall Memo2Click(TObject *Sender);
	void __fastcall Memo3Click(TObject *Sender);
	void __fastcall Memo4Click(TObject *Sender);
	void __fastcall Memo5Click(TObject *Sender);
	void __fastcall Memo6Click(TObject *Sender);
	void __fastcall Memo7Click(TObject *Sender);
	void __fastcall Memo8Click(TObject *Sender);
	void __fastcall Memo9Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
