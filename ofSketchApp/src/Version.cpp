// =============================================================================
//
// Copyright (c) 2013-2014 Christopher Baker <http://christopherbaker.net>
// Copyright (c) 2014 Brannon Dorsey <http://brannondorsey.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
// =============================================================================


#include "Version.h"
#include <sstream>


namespace of {
namespace Sketch {
        


int Version::major()
{
    return VERSION_MAJOR;
}


int Version::minor()
{
    return VERSION_MINOR;
}


int Version::patch()
{
    return VERSION_PATCH;
}


std::string Version::special()
{
    return VERSION_SPECIAL;
}


std::string Version::asString()
{
    std::stringstream ss;

    ss << VERSION_MAJOR << ".";
    ss << VERSION_MINOR << ".";
    ss << VERSION_PATCH;

    if (!special().empty())
    {
        ss << "-" << special();
    }
    
    return ss.str();
}


} } // namespace of::Sketch
