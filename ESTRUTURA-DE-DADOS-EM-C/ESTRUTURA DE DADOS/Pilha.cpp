#include <stdio.h>
#define STACK_SIZE 6

struct stack{
	
	int items[STACK_SIZE];
	int top;
};

typedef struct stack Stack;

Stack __stack__(){
	
	Stack stack;
	
	stack.top = -1;
	
	return stack;
}

int pop(Stack *stack){
	
	return stack->items[stack->top--];
}
int stack_is_empty(Stack*stack){
	return stack->top < 0;
}
int pop_and_test(Stack*stack, int *stack_underflow){
	*stack_underflow = stack_is_empty(stack);
	if (!stack_underflow)
		return stack->items[stack->top--];
	return -1;
}
void push(Stack *stack, int item){
	stack->items[++stack->top] = item;
}
int stack_is_full (Stack*stack){
	return stack->top == STACK_SIZE -1;
}
void push_and_test (Stack*stack, int item, int *stack_overflow){
	*stack_overflow = stack_is_full(stack);
	if (!*stack_overflow)
	stack->items[++stack->top] = item;
}
int main(int argc, char *argv[]){
	
	Stack my_stack = __stack__();
	int stack_underflow=0;
	int  stack_overflow=0;
	
	for (int item = 0; item < STACK_SIZE; item++){
		push (&my_stack, item*10+1);}
	for (int item = 0; item < STACK_SIZE; item++){
		my_stack.items[item] = item * 10 +1;
		my_stack.top = item;
	}
	for (int item = 0; item < STACK_SIZE; item++){
		printf("Valor normal: %d\n",my_stack.items[item]);
	}
	printf ("\n");
	
	for (int item = 0; item < STACK_SIZE; item++){
		printf("Valor removido: %d\n", pop(&my_stack));
	}
		for (int item = 0; item <= STACK_SIZE+10; item++){
		push(&my_stack, item*10+1);
		if (stack_overflow)
		printf ("OCORREU OVERFLOW");
	}
	for (int item = 0; item <= STACK_SIZE+10; item++){
		printf ("Valor removido: %d \n",pop_and_test(&my_stack, &stack_underflow));
		if (stack_underflow)
		printf ("OCORREU UNDERFLOW");
	}
	return 0;
}
