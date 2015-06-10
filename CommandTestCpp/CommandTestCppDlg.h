// CommandTestCppDlg.h : header file
//

#pragma once
#include "Calculator.h"
#include "CalculatorCommands.h"

// CCommandTestCppDlg dialog
class CCommandTestCppDlg : public CDialog
{
// Construction
public:
	CCommandTestCppDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_COMMANDTESTCPP_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()




private:	
	Calculator calculator;   
	CommandBase *command; //This will be used to invoke commands

	AddCommand addCmd;
	SubtractCommand subCmd;
	MultiplyCommand mulCmd;

	afx_msg void OnBnClickedRadioAdd();
	afx_msg void OnBnClickedRadioSubstract();
	afx_msg void OnBnClickedRadioMultiple();
	afx_msg void OnBnClickedButtonCalculate();
	afx_msg void OnBnClickedButtonClose();
};
