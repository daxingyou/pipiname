

#include "stdafx.h"
#include "MyIE.h"

#include "MyIEDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyIEDoc

IMPLEMENT_DYNCREATE(CQQRegDoc, CDocument)

BEGIN_MESSAGE_MAP(CQQRegDoc, CDocument)
END_MESSAGE_MAP()


// CQQRegDoc构造/析构

CQQRegDoc::CQQRegDoc()
{
	// TODO: 在此添加一次性构造代码

}

CQQRegDoc::~CQQRegDoc()
{
}

BOOL CQQRegDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}




// CQQRegDoc序列化

void CQQRegDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 在此添加存储代码
	}
	else
	{
		// TODO: 在此添加加载代码
	}
}


// CQQRegDoc诊断

#ifdef _DEBUG
void CQQRegDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CQQRegDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CQQRegDoc命令
