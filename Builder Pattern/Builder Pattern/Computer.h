#pragma once
#include<iostream>
#include<string>

class Computer {
private:
	std::string cpu_;
	int ram_;
	int storage_;
	std::string gpu_;

	Computer(const std::string& cpu, int ram, int storage, const std::string& gpu)
		: cpu_(cpu), ram_(ram), storage_(storage), gpu_(gpu){ }

public:
	void print() const {
		std::cout << "CPU : " << cpu_ << '\n';
		std::cout << "RAM : " << ram_ << '\n';
		std::cout << "Storage : " << storage_ << '\n';
		std::cout << "GPU : " << gpu_ << '\n';
		std::cout << "-------------------" << '\n';
	}

	class Builder {
	
	private:
		std::string cpu_;
		int ram_ = 8;
		int storage_ = 512;
		std::string gpu_ = "내장그래픽";

	public:
		Builder() = default;

		Builder& setCPU(const std::string& cpu) {
			cpu_ = cpu;
			return *this;
		}
		Builder& setRAM(int ram) {
			ram_ = ram;
			return *this;
		}
		Builder& setStorage(int storage) {
			storage_ = storage;
			return *this;
		}
		Builder& setGPU(const std::string& gpu) {
			gpu_ = gpu;
			return *this;
		}

		Computer build() {
			return Computer(cpu_, ram_, storage_, gpu_);
		}
	};
};