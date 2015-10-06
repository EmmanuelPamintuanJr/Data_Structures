#include <vector>
#include <cassert>

template<typename T>
class my_stack{

private:
	vector<T> stack;

public:
void push(const T& entry){
	stack.push_back(entry);}

T pop(){
	assert(stack.size()>0);
	T item = stack.back();
	stack.pop_back();
	return item;}

const T& peek(){
	assert(stack.size()>0);
	const T& answer = stack.back();
	return answer;}


const size_t size(){
	return stack.size();}

};
