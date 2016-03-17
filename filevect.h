//=========================================================
// File: filevect.h

#if !defined(__FILEVECTOR_H)
#define __FILEVECTOR_H

#define EMPTY_STATE -1

template<class T> class FileVector
{
public:
	FileVector();
	FileVector(T* ptArray, size_t upbound, size_t size);
	FileVector(size_t iNewSize, size_t nExpandBy = 1);
	virtual ~FileVector();
	FileVector(FileVector& spaArg);
	operator T*()
	{
		return m_pT;
	}
	size_t InsertAt(size_t iIndex, T elem, size_t iCount = 1);
	void InsertAtRef(size_t iIndex, T& elem, size_t iCount = 1);
	size_t InsertExpandOn(size_t iIndex, T elem, size_t iCount = 1);
	void InsertAtExpandRef(size_t iIndex, T& elem, size_t iCount = 1);
	size_t InsertExpandOn (size_t iIndex, T* pT, size_t iSrcIndex, size_t iCount);
	size_t RemoveAt(size_t iIndex, size_t iCount = 1);
	void SetAtExpand(size_t iIndex, T elem);
	size_t SetAtExpandRef(size_t iIndex, T& elem);
	void SetAt(size_t iIndex, T elem);
	void SetAtRef(size_t iIndex, T& elem);
	T GetAt(size_t iIndex);
	T& GetRefAt(size_t iIndex);
	size_t GetSize();
	size_t Upper();
	size_t Length();
	size_t GetExpandBy();
	size_t SetLength(size_t iNewSize, size_t nExpandBy = 0);
	void SetExpandBy(size_t nExpandBy);
	T& operator[](int iIndex) {return m_pT[iIndex];}
	FileVector<T>& operator=(FileVector<T>& v);
	void Reset();
	size_t blContainsRef(T& elem);
	size_t blContains(T elem);
	size_t nContainsAt(T elem);
	size_t IsEmpty();
	void AppendRef(T& elem);
	void Append(T elem);
	void Exchange(size_t iIndex1, size_t iIndex2);
	size_t Compare(FileVector<T>& v);
	size_t operator==(FileVector<T>& v);
	size_t operator!=(FileVector<T>& v);
	size_t Adopt(T* ptArray, size_t upbound, size_t size);
	void SetUpperBound(size_t upbnd);
	size_t AppendArray( T* pSrc, size_t iLengthgthOfSource );
	size_t ExpandToSize();
	size_t CopyFrom(size_t index, T* pSrc, size_t iLengthgthOfSource );
	size_t Replace( size_t ToReplaceIndex, size_t ToReplaceLengthgth, T* pReplaceWith, size_t ReplaceWithLengthgth );

protected:
	size_t AddSpace (size_t nExtend);
	T* m_pT;
	size_t m_nSize;
	size_t m_nUpperBound;
	size_t m_nExpandBy;
};

#endif // #if !defined(__FILEVECTOR_H)
