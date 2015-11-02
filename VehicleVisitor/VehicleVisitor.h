class VehicleVisitor
{
public:
	virtual void visit(class BMW *bmw) = 0;
	virtual void visit(class MercedesBenz *bmw) = 0;
	// virtual void start() = 0;
	// virtual void stop() = 0;
	// virtual void step_on_it(int x) = 0;
	// virtual void hit_the_breaks(int x) = 0;
};
