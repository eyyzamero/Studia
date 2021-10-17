#pragma once

class ExerciseBase
{
	public:
		virtual ~ExerciseBase() = default;
		virtual void run() = 0;
	
	private:
		virtual void execute() = 0;
};