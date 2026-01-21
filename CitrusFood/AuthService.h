#pragma once
using namespace System;

public ref class AuthService
{
public:
	static bool Login(String^ user, String^ password);
};