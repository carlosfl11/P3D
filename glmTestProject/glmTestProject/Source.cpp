//tipos de dados:
//vec3, vec4, ivec4, mat4 entre outros
#include <glm/glm.hpp>
//Funloes de matrizes de transformaçao:
//translate, rotate, scale, frustum, perspective, ortho entre outras
#include <glm/gtc/matrix_transform.hpp>
//Funloes que manipulam a interaçao entre apontadores e tipos de vetores e matrizes.
// value_ptr
#include <glm/gtc/type_ptr.hpp>
//c++
#include <iostream>

void testGlmMath() {
	//resoluçao da janela da aplicaçao: 800x600
	int width = 800, height = 600;
	//vertices que formam o triangulo
	glm::vec3 vertex[] = {
		glm::vec3(0.5f, -0.5f,0.0f),
		glm::vec3(0.0f,0.5f,0.0f),
		glm::vec3(-0.5f,-0.5f,0.0f)
	};

	//Matrix de projeçao
	glm::mat4 Projection = glm::frustum(-2.0f, 2.0f, -1.5f, 1.5f, 5.0f, 20.0f);

	//Matriz de visualizaçao(camara)
	glm::mat4 View = glm::lookAt(
		glm::vec3(0, 0, 0),		//eye
		glm::vec3(0, 0, -1),	//center
		glm::vec3(0, 1, 0)		//head up
	);

	//Matriz de modelaçao (Colocar objecto no mundo)
	glm::mat4 Model = glm::mat4(1.0f);
	// translaçao de 10 unidades no eixo dos z negativo
	Model = glm::translate(Model, glm::vec3(0.0f, 0.0f, -10.0f));

	//Matriz de modelaçao, visualizaçao, projecçao

	glm::mat4 MVP = Projection * View * Model;

	// imprimir coordenadas de recorte
	for (int i = 0; i < 3; i++) {
		glm::vec4 position = MVP * glm::vec4((glm::vec3)vertex[i], 1.0f);

		std::cout << "Coordenadas de Recorte do Vertex " << i << ":\n";
		std::cout << "\tXclip=" << position.x << " Yclip=" << position.y << " Zclip=" << position.z <<
			" Wclip =" << position.w << std::endl;
	}
}


void exerc1() {
	// ponto
	glm::vec3 P(1.0f, 0.0f, 0.0f);

	//Matriz modelaçao
	glm::mat4 model = glm::mat4(1.0f);

	model = glm::rotate(model, glm::radians(45.0f), glm::vec3(0, 0, 1));
	model = glm::translate(model, glm::vec3(10.0f, 0.0f, 0.0f));

	glm::vec3 pFinal = model * glm::vec4(P, 1.0f);

	std::cout << "Coordenadas de P apos alteracao:" << std::endl;
	std::cout << "P=(" << pFinal.x << "," << pFinal.y << "," << pFinal.z << ")" << std::endl;

}


int main(void) {
	// exemplo
	std::cout << "*********		testGlmMath		*************" << std::endl;
	testGlmMath();
	std::cout << "Press to continue!" << std::endl;
	std::cin.get();
	system("cls");

	//exercicio 1
	std::cout << "*********	 exercicio 1	*************" << std::endl;
	exerc1();
	std::cin.get();
}