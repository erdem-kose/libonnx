#include "../onnx.h"

void resolver_default_op_NegativeLogLikelihoodLoss(struct onnx_node_t * n)
{
	if(n->opset >= 13)
	{
	}
	else if(n->opset >= 12)
	{
	}
}
