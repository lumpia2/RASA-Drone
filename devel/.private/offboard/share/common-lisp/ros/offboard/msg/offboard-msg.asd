
(cl:in-package :asdf)

(defsystem "offboard-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "offboardMode" :depends-on ("_package_offboardMode"))
    (:file "_package_offboardMode" :depends-on ("_package"))
  ))