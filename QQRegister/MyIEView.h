//Download by http://www.NewXing.com
// MyIEView.h : CMyIEView 类的接口
//


#pragma once


class CMyIEView : public CHtmlView
{
protected: // 仅从序列化创建
	CMyIEView();
	DECLARE_DYNCREATE(CMyIEView)

// 属性
public:
	CQQRegDoc* GetDocument() const;

// 操作
public:

// 重写
	public:
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CMyIEView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
	void fill();
	int m_time;
	bool  m_bstartyanzhi;
public:
	afx_msg void OnFill();
	afx_msg void OnFileNew();
	int SaveBitmapToFile(HBITMAP hBitmap, LPTSTR lpFileName) /*hBitmap 为刚才的屏??图句柄 */;
	HBITMAP CopyScreenToBitmap(LPRECT lpRect) /*lpRect 代表选定区域 */;
	UINT  static __cdecl MyControllingFunction( LPVOID pParam );
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnUpdateThunderVip(CCmdUI *pCmdUI);
	void FillWeb(CString csWebSite,CString csAccountname,CString csPasswdName);
	CString GetWebStieHtml(CString  strUrl);
private:
	CString m_csAccount;
	CString m_csPasswd;
public:
	afx_msg void OnUpdateCallme(CCmdUI *pCmdUI);
	afx_msg void OnUpdateStartshare(CCmdUI *pCmdUI);
	afx_msg void OnAdblock();
	afx_msg void OnUpdateAndroiddown(CCmdUI *pCmdUI);
	virtual void OnDraw(CDC* /*pDC*/);
};

#ifndef _DEBUG  // MyIEView.cpp 的调试版本
inline CQQRegDoc* CMyIEView::GetDocument() const
   { return reinterpret_cast<CQQRegDoc*>(m_pDocument); }
void Screen(char filename[]);

#endif

