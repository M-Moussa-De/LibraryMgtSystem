#ifndef UserTypes_H
#define UserTypes_H

enum class UserRole {
  ADMIN,
  STAFF,
  STUDENT,
  GUEST
};

enum class Permission {
  // Users can only view the resources (e.g., search books, view details),
  // but cannot modify anything.
  READ_ONLY,
  // This level allows both reading and writing.
  // It’s appropriate for users who need to both browse resources
  // and make updates (e.g., faculty members, staff, or students
  // who can check out and return books, add notes, etc.
  READ_WRITE,
  BORROW_ONLY, // Can borrow books, but not modify resources
  // Full access typically includes all read and write permissions,
  // plus administrative features (e.g., adding/removing users, modifying system configurations).
  // This could apply to system administrators or library management staff.
  FULL_ACCESS
};

#endif //UserTypes_H