
// CheckListBoxDlg.h : header file
//

#pragma once


// CCheckListBoxDlg dialog
class CCheckListBoxDlg : public CDialogEx
{
// Construction
public:
	CCheckListBoxDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHECKLISTBOX_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	CCheckListBox* m_List;
	CEdit* m_Entry;
	CButton* m_Add;
// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	virtual void addEntry();
};
