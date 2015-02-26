
#include <iostream>

#define PREPEND_SPDLOG  0   /* If !0, spdlog/spdlog.h is included 1st */

#if defined (PREPEND_SPDLOG) && (PREPEND_SPDLOG != 0)
#include <spdlog/spdlog.h>
#include <format.h>
#else
#include <format.h>
#include <spdlog/spdlog.h>
#endif

int main (int argc, char **argv) {
    auto logger = spdlog::stdout_logger_mt ("stdout") ;
    std::cout << "Hello World" << std::endl ;
    logger->info ("Hello spdlog") ;
    fmt::print (std::cout, "Hello {}", "cppformat") ;
    return 0 ;
}
