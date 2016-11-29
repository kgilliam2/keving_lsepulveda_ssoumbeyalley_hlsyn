#pragma once

#ifndef VERTEX_H
#define VERTEX_H
#include "main.h"
#include "Edge.h"

class Vertex {

public:
	Vertex();
	Vertex(int n);
	Vertex(int n, std::string strType);
	static std::string checkValidOp(std::string s);
	void setString(std::string s);
	void setID(int n);
	int getID();
	void setType(string s);
	std::string getType();
	void printVertex();
	std::vector<Edge*> getOutgoing();
	std::vector<Edge*> getIncoming();
	void addIncoming(Edge* e);
	void addOutgoing(Edge* e);
	void setVNumber(int n);
	int getVNumber();
	void visit();
	bool checkVisited();
	//static void setLatency(int n);
	static int latency;
	int getALAPTime();
	void setALAPTime(int n);
private:
	std::string sType;
	int ID;
	int vNumber;
	std::vector<Edge*> incoming;
	std::vector<Edge*> outgoing;
	bool visited;
	int ALAPtime;
	std::string str;


};
#endif