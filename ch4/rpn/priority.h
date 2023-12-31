//运算符优先级表
#define N_OPTR 9
typedef enum{ADD, SUB, MUL, DIV, POW, FAC, L_P, R_P, EOE} Operator;

const char pri[N_OPTR][N_OPTR] = {
/*              |-------------------- 当 前 运 算 符 --------------------| */
/*              +      -      *      /      ^      !      (      )      \0 */
    '>',   '>',   '<',   '<',   '<',   '<',   '<',   '>',   '>',
    '>',   '>',   '<',   '<',   '<',   '<',   '<',   '>',   '>',
    '>',   '>',   '>',   '>',   '<',   '<',   '<',   '>',   '>',
    '>',   '>',   '>',   '>',   '<',   '<',   '<',   '>',   '>',
    '>',   '>',   '>',   '>',   '>',   '<',   '<',   '>',   '>',
    '>',   '>',   '>',   '>',   '>',   '>',   ' ',   '>',   '>',
    '<',   '<',   '<',   '<',   '<',   '<',   '<',   '=',   ' ',
    ' ',   ' ',   ' ',   ' ',   ' ',   ' ',   ' ',   ' ',   ' ',
    '<',   '<',   '<',   '<',   '<',   '<',   '<',   ' ',   '='
};