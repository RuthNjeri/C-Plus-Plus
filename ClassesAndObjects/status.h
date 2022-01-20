#pragma once
enum Status
{
	Pending,
	Approved,
	Cancelled
};

enum class FileError // Use scoped enums as the default
{
	notfound,
	ok
}; 

enum class NetworkError
{
	disconnected,
	ok
};