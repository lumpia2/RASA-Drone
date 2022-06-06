;; Auto-generated. Do not edit!


(when (boundp 'offboard::offboardMode)
  (if (not (find-package "OFFBOARD"))
    (make-package "OFFBOARD"))
  (shadow 'offboardMode (find-package "OFFBOARD")))
(unless (find-package "OFFBOARD::OFFBOARDMODE")
  (make-package "OFFBOARD::OFFBOARDMODE"))

(in-package "ROS")
;;//! \htmlinclude offboardMode.msg.html


(defclass offboard::offboardMode
  :super ros::object
  :slots (_state ))

(defmethod offboard::offboardMode
  (:init
   (&key
    ((:state __state) "")
    )
   (send-super :init)
   (setq _state (string __state))
   self)
  (:state
   (&optional __state)
   (if __state (setq _state __state)) _state)
  (:serialization-length
   ()
   (+
    ;; string _state
    4 (length _state)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _state
       (write-long (length _state) s) (princ _state s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _state
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _state (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get offboard::offboardMode :md5sum-) "af6d3a99f0fbeb66d3248fa4b3e675fb")
(setf (get offboard::offboardMode :datatype-) "offboard/offboardMode")
(setf (get offboard::offboardMode :definition-)
      "string state

")



(provide :offboard/offboardMode "af6d3a99f0fbeb66d3248fa4b3e675fb")


