
// TappingRecorderDlg.h: 头文件
//

#pragma once


// CTappingRecorderDlg 对话框
class CTappingRecorderDlg : public CDialogEx
{
// 构造
public:
	CTappingRecorderDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAPPINGRECORDER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedRegister();
	LRESULT OnHotKey(WPARAM wParam, LPARAM lParam);
	// 是否注册过热键
	int isRegistered = 0;
	// 第一个点按下的时间
	int startTime = 0;
};
