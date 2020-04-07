
// X-MonitorDlg.h : �w�b�_�[ �t�@�C��
//

#pragma once

#include "CLogEdit.h"

// CXMonitorDlg �_�C�A���O
class CXMonitorDlg : public CDialogEx
{
// �R���X�g���N�V����
public:
	CXMonitorDlg(CWnd* pParent = NULL);	// �W���R���X�g���N�^�[

// �_�C�A���O �f�[�^
	enum { IDD = IDD_XMONITOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �T�|�[�g


// ����
protected:
	HICON m_hIcon;

	// �������ꂽ�A���b�Z�[�W���蓖�Ċ֐�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	afx_msg LRESULT OnAppendLog(WPARAM wParam, LPARAM lParam);

private:
	// ���O�\���p
	CLogEdit m_Edit_Log;
	virtual void OnCancel();
};