//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TForm1 *Form1;
bool m1click=0, m2click=0, m3click=0, m4click=0, m5click=0;
bool m6click=0, m7click=0, m8click=0, m9click=0;
bool won1=0, won2=0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Memo1Click(TObject *Sender)
{
	if(m1click==1) {
	ShowMessage("Sorry! This place is already taken!");
  }
		if(Label2->Text == "Player 1" && m1click==0) {
	Memo1->Text = "X";
	m1click=1;
	Label2->Text = "Player 2";
  }

	if(Label2->Text == "Player 2" && m1click==0)
	{
	  Memo1->Text = "O";
	  m1click=1;
	  Label2->Text = "Player 1";
	}

	if(Memo1->Text == "X" && Memo2->Text == "X" && Memo3->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo1->Text == "O" && Memo2->Text == "O" && Memo3->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}

	if(Memo1->Text == "X" && Memo5->Text == "X" && Memo9->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo1->Text == "O" && Memo5->Text == "O" && Memo9->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}
	if(Memo1->Text == "X" && Memo4->Text == "X" && Memo7->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo1->Text == "O" && Memo4->Text == "O" && Memo7->Text == "O")
		{
			ShowMessage("Player 2 is won!");
            won2=true;
		}

        if(won1==true) {
			Memo1->Enabled=false;
			Memo2->Enabled=false;
			Memo3->Enabled=false;
			Memo4->Enabled=false;
			Memo5->Enabled=false;
			Memo6->Enabled=false;
			Memo7->Enabled=false;
			Memo8->Enabled=false;
			Memo9->Enabled=false;

			Label3->Visible=true;
		}
		if(won2==true) {
			Memo1->Enabled=false;
			Memo2->Enabled=false;
			Memo3->Enabled=false;
			Memo4->Enabled=false;
			Memo5->Enabled=false;
			Memo6->Enabled=false;
			Memo7->Enabled=false;
			Memo8->Enabled=false;
			Memo9->Enabled=false;

            Label4->Visible=true;
        }



}
//---------------------------------------------------------------------------
void __fastcall TForm1::Memo2Click(TObject *Sender)
{
	if(m2click==1) {
	ShowMessage("Sorry! This place is already taken!");
  }

  if(Label2->Text == "Player 1" && m2click==0) {
	Memo2->Text = "X";
	m2click=1;
	Label2->Text = "Player 2";
  }

	if(Label2->Text == "Player 2" && m2click==0) {
	  Memo2->Text = "O";
	  m2click=1;
	  Label2->Text = "Player 1";
	}

	if(Memo1->Text == "X" && Memo2->Text == "X" && Memo3->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo1->Text == "O" && Memo2->Text == "O" && Memo3->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}
	if(Memo2->Text == "X" && Memo5->Text == "X" && Memo8->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo2->Text == "O" && Memo5->Text == "O" && Memo8->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}
		if(won1==true) {
			Memo1->Enabled=false;
			Memo2->Enabled=false;
			Memo3->Enabled=false;
			Memo4->Enabled=false;
			Memo5->Enabled=false;
			Memo6->Enabled=false;
			Memo7->Enabled=false;
			Memo8->Enabled=false;
			Memo9->Enabled=false;

			Label3->Visible=true;
		}
		if(won2==true) {
            Memo1->Enabled=false;
			Memo2->Enabled=false;
			Memo3->Enabled=false;
			Memo4->Enabled=false;
			Memo5->Enabled=false;
			Memo6->Enabled=false;
			Memo7->Enabled=false;
			Memo8->Enabled=false;
			Memo9->Enabled=false;

            Label4->Visible=true;
        }


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Memo3Click(TObject *Sender)
{
if(m3click==1) {
	ShowMessage("Sorry! This place is already taken!");
  }

  if(Label2->Text == "Player 1" && m3click==0) {
	Memo3->Text = "X";
	m3click=1;
	Label2->Text = "Player 2";
  }

	if(Label2->Text == "Player 2" && m3click==0) {
	  Memo3->Text = "O";
	  m3click=1;
	  Label2->Text = "Player 1";
	}

	if(Memo1->Text == "X" && Memo2->Text == "X" && Memo3->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo1->Text == "O" && Memo2->Text == "O" && Memo3->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}
	if(Memo7->Text == "X" && Memo5->Text == "X" && Memo3->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo7->Text == "O" && Memo5->Text == "O" && Memo3->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}
	if(Memo9->Text == "X" && Memo6->Text == "X" && Memo3->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo9->Text == "O" && Memo6->Text == "O" && Memo3->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}

        if(won1==true) {
			Memo1->Enabled=false;
			Memo2->Enabled=false;
			Memo3->Enabled=false;
			Memo4->Enabled=false;
			Memo5->Enabled=false;
			Memo6->Enabled=false;
			Memo7->Enabled=false;
			Memo8->Enabled=false;
			Memo9->Enabled=false;

			Label3->Visible=true;
		}
		if(won2==true) {
            Memo1->Enabled=false;
			Memo2->Enabled=false;
			Memo3->Enabled=false;
			Memo4->Enabled=false;
			Memo5->Enabled=false;
			Memo6->Enabled=false;
			Memo7->Enabled=false;
			Memo8->Enabled=false;
			Memo9->Enabled=false;

            Label4->Visible=true;
        }



}
//---------------------------------------------------------------------------
void __fastcall TForm1::Memo4Click(TObject *Sender)
{
if(m4click==1) {
	ShowMessage("Sorry! This place is already taken!");
  }

  if(Label2->Text == "Player 1" && m4click==0) {
	Memo4->Text = "X";
	m4click=1;
	Label2->Text = "Player 2";
  }

	if(Label2->Text == "Player 2" && m4click==0) {
	  Memo4->Text = "O";
	  m4click=1;
	  Label2->Text = "Player 1";
	}
    if(Memo1->Text == "X" && Memo4->Text == "X" && Memo7->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo1->Text == "O" && Memo4->Text == "O" && Memo7->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}
	if(Memo4->Text == "X" && Memo5->Text == "X" && Memo6->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo4->Text == "O" && Memo5->Text == "O" && Memo6->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}

        if(won1==true) {
			Memo1->Enabled=false;
			Memo2->Enabled=false;
			Memo3->Enabled=false;
			Memo4->Enabled=false;
			Memo5->Enabled=false;
			Memo6->Enabled=false;
			Memo7->Enabled=false;
			Memo8->Enabled=false;
			Memo9->Enabled=false;

			Label3->Visible=true;
		}
		if(won2==true) {
            Memo1->Enabled=false;
			Memo2->Enabled=false;
			Memo3->Enabled=false;
			Memo4->Enabled=false;
			Memo5->Enabled=false;
			Memo6->Enabled=false;
			Memo7->Enabled=false;
			Memo8->Enabled=false;
			Memo9->Enabled=false;

            Label4->Visible=true;
        }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Memo5Click(TObject *Sender)
{
if(m5click==1) {
	ShowMessage("Sorry! This place is already taken!");
  }

  if(Label2->Text == "Player 1" && m5click==0) {
	Memo5->Text = "X";
	m5click=1;
	Label2->Text = "Player 2";
  }

	if(Label2->Text == "Player 2" && m5click==0) {
	  Memo5->Text = "O";
	  m5click=1;
	  Label2->Text = "Player 1";
	}
    if(Memo4->Text == "X" && Memo5->Text == "X" && Memo6->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo4->Text == "O" && Memo5->Text == "O" && Memo6->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}
	if(Memo1->Text == "X" && Memo5->Text == "X" && Memo9->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo1->Text == "O" && Memo5->Text == "O" && Memo9->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}
    if(Memo2->Text == "X" && Memo5->Text == "X" && Memo8->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo2->Text == "O" && Memo5->Text == "O" && Memo8->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}
    if(Memo7->Text == "X" && Memo5->Text == "X" && Memo3->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo7->Text == "O" && Memo5->Text == "O" && Memo3->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}
        if(won1==true) {
			Memo1->Enabled=false;
			Memo2->Enabled=false;
			Memo3->Enabled=false;
			Memo4->Enabled=false;
			Memo5->Enabled=false;
			Memo6->Enabled=false;
			Memo7->Enabled=false;
			Memo8->Enabled=false;
			Memo9->Enabled=false;

			Label3->Visible=true;
		}
		if(won2==true) {
            Memo1->Enabled=false;
			Memo2->Enabled=false;
			Memo3->Enabled=false;
			Memo4->Enabled=false;
			Memo5->Enabled=false;
			Memo6->Enabled=false;
			Memo7->Enabled=false;
			Memo8->Enabled=false;
			Memo9->Enabled=false;

            Label4->Visible=true;
        }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Memo6Click(TObject *Sender)
{
if(m6click==1) {
	ShowMessage("Sorry! This place is already taken!");
  }

  if(Label2->Text == "Player 1" && m6click == 0) {
	Memo6->Text = "X";
	m6click=1;
	Label2->Text = "Player 2";
  }

	if(Label2->Text == "Player 2" && m6click == 0) {
	  Memo6->Text = "O";
	  m6click=1;
	  Label2->Text = "Player 1";
	}
	if(Memo9->Text == "X" && Memo6->Text == "X" && Memo3->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;

	}
		if(Memo9->Text == "O" && Memo6->Text == "O" && Memo3->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}
	if(Memo4->Text == "X" && Memo5->Text == "X" && Memo6->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo4->Text == "O" && Memo5->Text == "O" && Memo6->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}
        if(won1==true) {
			Memo1->Enabled=false;
			Memo2->Enabled=false;
			Memo3->Enabled=false;
			Memo4->Enabled=false;
			Memo5->Enabled=false;
			Memo6->Enabled=false;
			Memo7->Enabled=false;
			Memo8->Enabled=false;
			Memo9->Enabled=false;

			Label3->Visible=true;
		}
		if(won2==true) {
            Memo1->Enabled=false;
			Memo2->Enabled=false;
			Memo3->Enabled=false;
			Memo4->Enabled=false;
			Memo5->Enabled=false;
			Memo6->Enabled=false;
			Memo7->Enabled=false;
			Memo8->Enabled=false;
			Memo9->Enabled=false;

            Label4->Visible=true;
        }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Memo7Click(TObject *Sender)
{
if(m7click==1) {
	ShowMessage("Sorry! This place is already taken!");
  }

  if(Label2->Text == "Player 1" && m7click==0) {
	Memo7->Text = "X";
	m7click=1;
	Label2->Text = "Player 2";
  }

	if(Label2->Text == "Player 2" && m7click == 0) {
	  Memo7->Text = "O";
	  m7click=1;
	  Label2->Text = "Player 1";
	}
    if(Memo1->Text == "X" && Memo4->Text == "X" && Memo7->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo1->Text == "O" && Memo4->Text == "O" && Memo7->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}
    if(Memo7->Text == "X" && Memo5->Text == "X" && Memo3->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo7->Text == "O" && Memo5->Text == "O" && Memo3->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}
	if(Memo7->Text == "X" && Memo8->Text == "X" && Memo9->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo7->Text == "O" && Memo8->Text == "O" && Memo9->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}
        if(won1==true) {
			Memo1->Enabled=false;
			Memo2->Enabled=false;
			Memo3->Enabled=false;
			Memo4->Enabled=false;
			Memo5->Enabled=false;
			Memo6->Enabled=false;
			Memo7->Enabled=false;
			Memo8->Enabled=false;
			Memo9->Enabled=false;

			Label3->Visible=true;
		}
		if(won2==true) {
            Memo1->Enabled=false;
			Memo2->Enabled=false;
			Memo3->Enabled=false;
			Memo4->Enabled=false;
			Memo5->Enabled=false;
			Memo6->Enabled=false;
			Memo7->Enabled=false;
			Memo8->Enabled=false;
			Memo9->Enabled=false;

            Label4->Visible=true;
        }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Memo8Click(TObject *Sender)
{
	if(m8click==1) {
	ShowMessage("Sorry! This place is already taken!");
  }

  if(Label2->Text == "Player 1" && m8click == 0) {
	Memo8->Text = "X";
	m8click=1;
	Label2->Text = "Player 2";
  }

	if(Label2->Text == "Player 2" && m8click == 0) {
	  Memo8->Text = "O";
	  m8click=1;
	  Label2->Text = "Player 1";
	}
   if(Memo2->Text == "X" && Memo5->Text == "X" && Memo8->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo2->Text == "O" && Memo5->Text == "O" && Memo8->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}
    if(Memo7->Text == "X" && Memo8->Text == "X" && Memo9->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo7->Text == "O" && Memo8->Text == "O" && Memo9->Text == "O")
		{
			ShowMessage("Player 2 is won!");
            won2=true;
		}
        if(won1==true) {
			Memo1->Enabled=false;
			Memo2->Enabled=false;
			Memo3->Enabled=false;
			Memo4->Enabled=false;
			Memo5->Enabled=false;
			Memo6->Enabled=false;
			Memo7->Enabled=false;
			Memo8->Enabled=false;
			Memo9->Enabled=false;

			Label3->Visible=true;
		}
		if(won2==true) {
            Memo1->Enabled=false;
			Memo2->Enabled=false;
			Memo3->Enabled=false;
			Memo4->Enabled=false;
			Memo5->Enabled=false;
			Memo6->Enabled=false;
			Memo7->Enabled=false;
			Memo8->Enabled=false;
			Memo9->Enabled=false;

            Label4->Visible=true;
        }


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Memo9Click(TObject *Sender)
{
if(m9click==1) {
	ShowMessage("Sorry! This place is already taken!");
  }

  if(Label2->Text == "Player 1" && m9click == 0) {
	Memo9->Text = "X";
	m9click=1;
	Label2->Text = "Player 2";
  }

	if(Label2->Text == "Player 2" && m9click == 0) {
	  Memo9->Text = "O";
	  m9click=1;
	  Label2->Text = "Player 1";
	}
    if(Memo7->Text == "X" && Memo8->Text == "X" && Memo9->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo7->Text == "O" && Memo8->Text == "O" && Memo9->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}
	if(Memo9->Text == "X" && Memo6->Text == "X" && Memo3->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo9->Text == "O" && Memo6->Text == "O" && Memo3->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}
   if(Memo1->Text == "X" && Memo5->Text == "X" && Memo9->Text == "X")
	{
		ShowMessage("Player 1 is won!");
		won1=true;
	}
		if(Memo1->Text == "O" && Memo5->Text == "O" && Memo9->Text == "O")
		{
			ShowMessage("Player 2 is won!");
			won2=true;
		}

        if(won1==true) {
			Memo1->Enabled=false;
			Memo2->Enabled=false;
			Memo3->Enabled=false;
			Memo4->Enabled=false;
			Memo5->Enabled=false;
			Memo6->Enabled=false;
			Memo7->Enabled=false;
			Memo8->Enabled=false;
			Memo9->Enabled=false;

			Label3->Visible=true;
		}
		if(won2==true) {
			Memo1->Enabled=false;
			Memo2->Enabled=false;
			Memo3->Enabled=false;
			Memo4->Enabled=false;
			Memo5->Enabled=false;
			Memo6->Enabled=false;
			Memo7->Enabled=false;
			Memo8->Enabled=false;
			Memo9->Enabled=false;

            Label4->Visible=true;
        }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------





void __fastcall TForm1::Button2Click(TObject *Sender)
{
			Memo1->Enabled=true;
			Memo2->Enabled=true;
			Memo3->Enabled=true;
			Memo4->Enabled=true;
			Memo5->Enabled=true;
			Memo6->Enabled=true;
			Memo7->Enabled=true;
			Memo8->Enabled=true;
			Memo9->Enabled=true;

			Label3->Visible=false;
			Label4->Visible=false;

			m1click=false;
			m2click=false;
			m3click=false;
			m4click=false;
			m5click=false;
			m6click=false;
			m7click=false;
			m8click=false;
			m9click=false;

			Memo1->Text = "";
			Memo2->Text = "";
			Memo3->Text = "";
			Memo4->Text = "";
			Memo5->Text = "";
			Memo6->Text = "";
			Memo7->Text = "";
			Memo8->Text = "";
			Memo9->Text = "";

			won1=false;
            won2=false;
}
//---------------------------------------------------------------------------

