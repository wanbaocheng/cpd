#pragma once

#include <armadillo>


namespace cpd
{
namespace registration
{


struct Result
{
    arma::mat Y;
};


typedef std::shared_ptr<Result> SpResult;


}
}