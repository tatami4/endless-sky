/* UUID.h
Copyright (c) 2021 by Michael Zahniser

Endless Sky is free software: you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later version.

Endless Sky is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details.
*/

#ifndef UUID_H_
#define UUID_H_

#include <string>

class UUID {
public:
	UUID() = default;
	
	// Get UUID. If UUID is not yet set, it is generated.
	std::string &GetOrCreate();
	const std::string &GetCurrent() const;
	
	// Set UUID. If UUID is already set, exception is thrown.
	void Set(const std::string &uuid);
	
	
private:
	 std::string uuid;
};



#endif
