// Copyright (C) 2018-2020 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <vector>
#include <memory>

#include <ie_api.h>

#include <ngraph/pass/graph_rewrite.hpp>
#include "transformations/utils/pass_param.hpp"

namespace ngraph {
namespace pass {

    class INFERENCE_ENGINE_API_CLASS(ConvertBroadcast3);

}  // namespace pass
}  // namespace ngraph

class ngraph::pass::ConvertBroadcast3: public ngraph::pass::GraphRewrite, public ngraph::pass::PassParam {
public:
    ConvertBroadcast3() : GraphRewrite() {
        convert_broadcast3();
    }

private:
    void convert_broadcast3();
};
