#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
typedef struct {
	char *op;
	int (*f)(int, int);
} op_t;
int (*get_op_func(char *s))(int, int);

#endif /* MAIN_H */
