#include "catch2/catch.hpp"

#include "instruction/instruction.h"
#include "tokenizer/tokenizer.h"
#include "analyser/analyser.h"
#include <sstream>
#include <vector>
/*
	不要忘记写测试用例喔。
*/
/*
TEST_CASE("ana") {

	std::string input =
				"begin\n"
				"	const a = 1;\n"
				"	var b = 2;\n"
				"	var c;\n"
				"	 c=3;\n"
				"end\n";
	std::stringstream ss;
	ss.str(input);
	miniplc0::Tokenizer tkz(ss);
	miniplc0::Analyser ana(tkz.AllTokens().first);
	auto result= ana.Analyse();
	if (result.second.has_value()) {
		FAIL();
	}
}
*/
TEST_CASE("assign") {

	std::string input =
		"begin\n"
		"	var b;\n"
		"	var c;\n"
		"end\n";
	std::stringstream ss;
	ss.str(input);
	miniplc0::Tokenizer tkz(ss);
	miniplc0::Analyser ana(tkz.AllTokens().first);
	auto result = ana.Analyse();
	if (result.second.has_value()) {
		FAIL();
	}
}