//----------------------------------------------------------------------------
#ifndef PaySlipReportH
#define PaySlipReportH
//----------------------------------------------------------------------------
#include <vcl\Classes.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\QuickRpt.hpp>
#include <vcl\QRCtrls.hpp>
#include <Qrctrls.hpp>
#include <quickrpt.hpp>
#include <ExtCtrls.hpp>
#include <Chart.hpp>
#include <DbChart.hpp>
#include <QRTEE.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
//----------------------------------------------------------------------------
class TQuickReport1 : public TQuickRep
{
__published:
    TQRLabel *QRLabel1;
    TQRLabel *QRLabel2;
    TQRLabel *QRLabel3;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel5;
    TQRLabel *QRLabel6;
    TQRLabel *QRLabel7;
    TQRLabel *QRLabel8;
    TQRLabel *QRLabel9;
    TQRLabel *QRLabel10;
    TQRLabel *QRLabel11;
    TQRLabel *QRLabel12;
    TQRLabel *QRLabel13;
    TQRLabel *QRLabel14;
    TQRLabel *QRLabel15;
    TQRLabel *QRLabel16;
    TQRLabel *QRLabel17;
    TQRLabel *QRLabel18;
    TQRLabel *QRLabel19;
    TQRLabel *QRLabel20;
    TQRLabel *QRLabel21;
    TQRLabel *QRLabel22;
    TQRLabel *QRLabel23;
    TQRLabel *QRLabel24;
    TQRLabel *QRLabel25;
    TQRLabel *QRLabel26;
    TQRLabel *QRLabel27;
    TQRLabel *QRLabel28;
    TQRLabel *QRLabel29;
    TQRLabel *QRLabel30;
    TQRLabel *QRLabel31;
    TQRLabel *QRLabel32;
    TQRLabel *QRLabel33;
    TQRLabel *QRLabel34;
    TQRLabel *QRLabel35;
    TQRLabel *QRLabel36;
    TQRLabel *QRLabel37;
    TQRLabel *QRLabel38;
    TQRLabel *QRLabel39;
    TQRLabel *QRLabel40;
    TQRLabel *QRLabel41;
    TQRLabel *QRLabel42;
    TQRLabel *QRLabel43;
    TQRLabel *QRLabel44;
    TQRLabel *QRLabel45;
    TQRLabel *QRLabel46;
    TQRLabel *QRLabel47;
    TQRLabel *QRLabel48;
    TQRLabel *QRLabel49;
    TQRLabel *QRLabel50;
    TQRLabel *QRLabel51;
    TQRLabel *QRLabel52;
    TQRLabel *QRLabel53;
    TQRLabel *QRLabel54;
    TQRLabel *QRLabel55;
    TQRLabel *QRLabel56;
    TQRLabel *QRLabel57;
    TQRLabel *QRLabel58;
    TQRLabel *QRLabel59;
    TQRLabel *QRLabel60;
    TQRLabel *QRLabel61;
    TQRLabel *QRLabel62;
    TQRLabel *QRLabel63;
    TQRLabel *QRLabel64;
    TQRLabel *QRLabel65;
    TQRLabel *QRLabel66;
    TQRLabel *QRLabel67;
    TQRLabel *QRLabel68;
    TQRLabel *QRLabel69;
    TQRLabel *QRLabel70;
    TQRLabel *QRLabel71;
    TQRLabel *QRLabel72;
    TQRLabel *QRLabel73;
    TQRLabel *QRLabel74;
    TQRLabel *QRLabel75;
    TQRLabel *QRLabel76;
    TQRLabel *QRLabel77;
    TQRLabel *QRLabel78;
    TQRLabel *QRLabel79;
    TQRLabel *QRLabel80;
    TQRLabel *QRLabel81;
    TQRLabel *QRLabel82;
    TQRLabel *QRLabel83;
    TQRLabel *QRLabel84;
    TQRLabel *QRLabel85;
    TQRLabel *QRLabel86;
    TQRLabel *QRLabel87;
    TQRLabel *QRLabel88;
    TQRLabel *QRLabel89;
    TQRLabel *QRLabel90;
    TQRLabel *QRLabel91;
    TQRLabel *QRLabel92;
    TQRLabel *QRLabel93;
    TQRLabel *QRLabel94;
    TQRLabel *QRLabel95;
    TQRLabel *QRLabel96;
    TQRLabel *QRLabel97;
    TQRLabel *QRLabel98;
    TQRLabel *QRLabel99;
    TQRLabel *QRLabel100;
    TQRLabel *QRLabel101;
    TQRLabel *QRLabel102;
    TQRLabel *QRLabel103;
    TQRLabel *QRLabel104;
    TQRLabel *QRLabel105;
    TQRLabel *QRLabel106;
    TQRLabel *QRLabel107;
    TQRLabel *QRLabel108;
    TQRLabel *QRLabel109;
    TQRLabel *QRLabel110;
    TQRLabel *QRLabel111;
    TQRLabel *QRLabel112;
    TQRLabel *QRLabel113;
    TQRLabel *QRLabel114;
    TQRLabel *QRLabel115;
    TQRLabel *QRLabel116;
    TQRLabel *QRLabel117;
    TQRLabel *QRLabel118;
    TQRLabel *QRLabel119;
    TQRLabel *QRLabel120;
    TQRLabel *QRLabel121;
    TQRLabel *QRLabel122;
    TQRLabel *QRLabel123;
    TQRLabel *QRLabel124;
    TQRLabel *QRLabel125;
    TQRLabel *QRLabel126;
    TQRLabel *QRLabel127;
    TQRLabel *QRLabel128;
    TQRLabel *QRLabel129;
    TQRLabel *QRLabel130;
    TQRLabel *QRLabel131;
    TQRLabel *QRLabel132;
    TQRLabel *QRLabel133;
    TQRLabel *QRLabel134;
    TQRLabel *QRLabel135;
    TQRLabel *QRLabel136;
    TQRLabel *QRLabel137;
    TQRLabel *QRLabel138;
    TQRLabel *QRLabel139;
    TQRLabel *QRLabel140;
    TQRLabel *QRLabel141;
    TQRLabel *QRLabel142;
    TQRLabel *QRLabel143;
    TQRLabel *QRLabel144;
    TQRLabel *QRLabel145;
    TQRLabel *QRLabel146;
    TQRShape *QRShape1;
    TQRShape *QRShape2;
    TQRShape *QRShape3;
    TQRShape *QRShape4;
    TQRLabel *QRLabel157;
    TQRShape *QRShape5;
    TQRShape *QRShape6;
    TQRShape *QRShape7;
    TQRShape *QRShape8;
    TQRShape *QRShape9;
    TQRLabel *QRLabel158;
    TQRLabel *QRLabel159;
    TQRLabel *QRLabel160;
    TQRShape *QRShape10;
    TQRShape *QRShape11;
    TQRShape *QRShape12;
    TQRShape *QRShape13;
    TQRShape *QRShape14;
    TQRShape *QRShape15;
    TQRShape *QRShape16;
    TQRLabel *QRLabel161;
    TQRLabel *QRLabel162;
    TQRLabel *QRLabel163;
    TQRLabel *QRLabel164;
    TQRLabel *QRLabel165;
    TQRLabel *QRLabel166;
    TQRLabel *QRLabel167;
    TQRLabel *QRLabel168;
    TQRLabel *QRLabel169;
    TQRLabel *QRLabel170;
    TQRLabel *QRLabel171;
    TQRLabel *QRLabel172;
    TQRLabel *QRLabel173;
    TQRLabel *QRLabel174;
    TQRLabel *QRLabel175;
    TQRShape *QRShape17;
    TQRShape *QRShape18;
    TQRShape *QRShape19;
    TQRShape *QRShape20;
    TQRShape *QRShape21;
    TQRShape *QRShape22;
    TQRShape *QRShape23;
    TQRShape *QRShape24;
    TQRShape *QRShape25;
    TQRShape *QRShape26;
        TQRBand *Palkkalaskelma;
        TQRSubDetail *QRSubDetail1;
        TQRCompositeReport *QRCompositeReport1;
private:
public:
   __fastcall TQuickReport1::TQuickReport1(TComponent* Owner);
};
//----------------------------------------------------------------------------
extern TQuickReport1 *QuickReport1;
//----------------------------------------------------------------------------
#endif