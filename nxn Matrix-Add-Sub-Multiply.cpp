#include <iostream>
class Matrix {
private:
	int nRows = 0, nCols = 0;
	int** mat;
public:
	Matrix() = default;
	Matrix(const Matrix& N) {
		nRows = N.nRows;
		nCols = N.nCols;
		this->mat = new int* [nRows];
		for (int i = 0; i < nRows; i++) {
			mat[i] = new int[nCols];
		}
		for (int i = 0; i < nRows; i++) {
			for (int j = 0; j < nCols; j++) {
				mat[i][j] = N.mat[i][j];
			}
		}
	}
	void GetSize() {
		std::cout << "\nEnter number of rows:";
		std::cin >> nRows;
		std::cout << "\nEnter number of columns:";
		std::cin >> nCols;
	}
	void CreateMatrix() {
		this->mat = new int* [nRows];
		for (int i = 0; i < nRows; i++) {
			mat[i] = new int[nCols];
		}
	}
	void GetData() {
		for (int i = 0; i < nRows; i++) {
			for (int j = 0; j < nCols; j++)
			{
				std::cout << "\nEnter element [" << i + 1 << "][" << j + 1 << "]:";
				std::cin >> mat[i][j];
			}
		}
	}
	void ShowData() {
		for (int i = 0; i < nRows; i++) {
			std::cout << "[ ";
			for (int j = 0; j < nCols; j++) {
				std::cout << mat[i][j] << " ";
			}
			std::cout << "]" << std::endl;
		}
	}
	void InputMatrix() {
		GetSize();
		CreateMatrix();
		GetData();
	}
	bool CanAdd(Matrix M1, Matrix M2) {
		if (M1.nRows == M2.nRows && M1.nCols == M2.nCols) {
			return true;
		}
		else {
			return false;
		}
	}
	void SetSizeAdd(Matrix M1, Matrix M2, int* row, int* cols) {
		Matrix m1 = M1;
		Matrix m2 = M2;
		if (CanAdd(m1, m2) == true) {
			*row = m1.nRows;
			*cols = m1.nCols;
		}
		else {
			std::exit(0);
		}

	}
	bool CanMul(Matrix M1, Matrix M2) {
		if (M1.nCols==M2.nRows) {
			return true;
		}
		else {
			return false;
		}
	}
	void SetSizeMul(Matrix M1, Matrix M2, int* row, int* cols) {
		Matrix m1 = M1;
		Matrix m2 = M2;
		if (CanMul(m1, m2) == true) {
			*row = m1.nRows;
			*cols = m2.nCols;
		}
		else {
			std::exit(0);
		}

	}
	~Matrix() {
		for (int i = 0; i < nRows; i++) {
			delete[]mat[i];
		}
		delete[]mat;
		mat = NULL;
	}
	Matrix MatAdd(Matrix x) {
		Matrix m1 = *this;
		Matrix m2 = x;
		Matrix m3;
		m3.SetSizeAdd(m1, m2, &m3.nRows, &m3.nCols);
		m3.CreateMatrix();
		for (int i = 0; i < m3.nRows; i++) {
			for (int j = 0; j < m3.nCols; j++) {
				m3.mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
			}
		}
		return m3;
	}
	Matrix MatSub(Matrix x) {
		Matrix m1 = *this;
		Matrix m2 = x;
		Matrix m3;
		m3.SetSizeAdd(m1, m2, &m3.nRows, &m3.nCols);
		m3.CreateMatrix();
		for (int i = 0; i < m3.nRows; i++) {
			for (int j = 0; j < m3.nCols; j++) {
				m3.mat[i][j] = m1.mat[i][j] - m2.mat[i][j];
			}
		}
		return m3;
	}
	Matrix MatMul(Matrix x) {
		Matrix m1 = *this;
		Matrix m2 = x;
		Matrix m3;
		m3.SetSizeAdd(m1, m2, &m3.nRows, &m3.nCols);
		m3.CreateMatrix();
		for (int i = 0; i < m1.nRows; i++) {
			for (int j = 0; j < m2.nCols; j++) {
				m3.mat[i][j] = 0;
			}
		}
		for (int i = 0; i < m1.nRows; i++) {
			for (int j = 0; j < m2.nCols; j++) {
				for (int k = 0; k < m1.nCols; k++) {
					m3.mat[i][j] += m1.mat[i][k] * m2.mat[k][j];
				}
			}
		}
		return m3;
	}
};
int main() {
	Matrix m;
	m.InputMatrix();
	m.ShowData();
	Matrix n;
	n.InputMatrix();
	n.ShowData();
	Matrix y = m.MatMul(n);
	y.ShowData();
	return 0;
}
