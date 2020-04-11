#define AtomType int
typedef enum{ATOM,LIST} ElemTag;
typedef struct GLNode{
    ElemTag tag;
    union 
    {
        AtomType atom;
        struct{struct GLNode *hp,*tp;}ptr;
    };
    
}*GList;