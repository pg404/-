/*
1029. 旧键盘(20)
旧键盘上坏了几个键，于是在敲一段文字的时候，对应的字符就不会出现。
现在给出应该输入的一段文字、以及实际被输入的文字，请你列出肯定坏掉
的那些键。

输入格式：

输入在2行中分别给出应该输入的文字、以及实际被输入的文字。每段文字是
不超过80个字符的串，由字母A-Z（包括大、小写）、数字0-9、以及下划线
“_”（代表空格）组成。题目保证2个字符串均非空。

输出格式：

按照发现顺序，在一行中输出坏掉的键。其中英文字母只输出大写，每个坏键
只输出一次。题目保证至少有1个坏键。

输入样例：
7_This_is_a_test
_hs_s_a_es
输出样例：
7TI
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
	string s1, s2, ans;
	cin>>s1>>s2;
	for(int i = 0; i < s1.length(); i++){
		if(s2.find(s1[i]) == string::npos && ans.find(toupper(s1[i])) == string::npos){
			ans += toupper(s1[i]);
		}
	}
	cout<<ans;
	return 0;
}

/*
npos 是这样定义的：
static const size_type npos = -1;
因为 string::size_type (由字符串配置器 allocator 定义) 描述的是 size，故需为无符号整数型别。
因为缺省配置器以型别 size_t 作为 size_type，
于是 -1 被转换为无符号整数型别，npos 也就成了该型别的最大无符号值。

要想判断 find() 的结果是否为npos，最好的办法是直接比较：

if (str.find("abc") == string::npos) { ... }
*/ 
