typedef char ItemType;

struct NodeType { // Parecido com uma classe
	ItemType info; //Informação armazenada no nó 
	NodeType* next; // apontamento para o próximo elemento 
};
