#pragma once
#ifndef CONTROLGRAPH_H
#define CONTROLGRAPH_H

#include "main.h"
#include "Block.h"
#include "Conditional.h"

class ControlGraph {

public:

	ControlGraph();
	void addBlock(Block* f);
	void addConditional(Conditional *c);
	Block* dropLast();
	std::vector<Block*> getBlocks();
	std::vector<Conditional*> getConditionals();
	//std::vector<State*> getStates();
	void setStart(Block* b);
	void setStart(Conditional* c);
	//bool query_isStartConditional();
	Conditional* getStartConditional();
	Block* getStartBlock();
	std::vector<State*> callGS();
	std::vector<State*> generateStates(Block* b);
	std::vector<State*> generateStates(Conditional* c);
private:
	std::vector<Block*> blocks;
	std::vector<Conditional*> conditionals;
	Block* StartBlock;
	Conditional* StartConditional;
};
#endif